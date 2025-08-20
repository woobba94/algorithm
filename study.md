// 1) 빈도 맵
const buildFrequencyMap = (array) => {
  const map = new Map();
  for (const value of array) map.set(value, (map.get(value) || 0) + 1);
  return map;
};

// 2) 두 포인터(정렬 후 합 타겟)
const findTwoSumSorted = (sortedNumbers, target) => {
  let left = 0, right = sortedNumbers.length - 1;
  while (left < right) {
    const sum = sortedNumbers[left] + sortedNumbers[right];
    if (sum === target) return [left, right];
    if (sum < target) left++; else right--;
  }
  return [-1, -1];
};

// 3) 슬라이딩 윈도우(중복 없는 가장 긴 부분문자열)
const findLengthOfLongestSubstringWithoutRepeat = (text) => {
  const lastIndex = new Map();
  let best = 0, start = 0;
  for (let i = 0; i < text.length; i++) {
    const ch = text[i];
    if (lastIndex.has(ch) && lastIndex.get(ch) >= start) start = lastIndex.get(ch) + 1;
    lastIndex.set(ch, i);
    best = Math.max(best, i - start + 1);
  }
  return best;
};

// 4) 접두사 합(부분배열 합이 K인 개수)
const countSubarraysWithSum = (numbers, target) => {
  let count = 0, prefix = 0;
  const seen = new Map([[0, 1]]);
  for (const x of numbers) {
    prefix += x;
    count += (seen.get(prefix - target) || 0);
    seen.set(prefix, (seen.get(prefix) || 0) + 1);
  }
  return count;
};

// 5) 다중 키 안정 정렬
const getNestedValueByPath = (object, dotPath) => {
  if (!object || !dotPath) return undefined;
  let current = object;
  for (const segment of dotPath.split('.')) {
    if (current == null) return undefined;
    current = current[segment];
  }
  return current;
};
const isNullOrUndefined = (v) => v === null || v === undefined;
const compareValuesConsideringDirectionAndNullsOrder = (a,b,dir='ascending',nulls='last') => {
  const mul = dir==='descending'?-1:1;
  const an=isNullOrUndefined(a), bn=isNullOrUndefined(b);
  if (an||bn) { if (an&&bn) return 0; return (nulls==='first'?(an?-1:1):(an?1:-1))*mul; }
  const na=Number(a), nb=Number(b);
  if (!Number.isNaN(na) && !Number.isNaN(nb)) return (na<nb?-1:na>nb?1:0)*mul;
  const sa=String(a), sb=String(b);
  return (sa<sb?-1:sa>sb?1:0)*mul;
};
const sortByMultipleKeysStably = (items, sortKeys=[]) => {
  if (!sortKeys.length) return items;
  return items.map((item,index)=>({item,index})).sort((A,B)=>{
    for (const k of sortKeys) {
      const av=getNestedValueByPath(A.item,k.key);
      const bv=getNestedValueByPath(B.item,k.key);
      const r=compareValuesConsideringDirectionAndNullsOrder(av,bv,k.direction||'ascending',k.nullsOrder||'last');
      if (r!==0) return r;
    }
    return A.index - B.index;
  }).map(w=>w.item);
};

// 6) 이분 탐색(최초 참 인덱스)
const findFirstIndexSatisfyingPredicate = (length, predicate) => {
  let low = 0, high = length; // [low, high)
  while (low < high) {
    const mid = Math.floor((low + high) / 2);
    if (predicate(mid)) high = mid; else low = mid + 1;
  }
  return low; // length면 없음
};

// 7) 스택(괄호 유효성)
const isValidParentheses = (text) => {
  const stack = [];
  const pair = {')':'(',']':'[','}':'{'};
  for (const ch of text) {
    if (ch==='('||ch==='['||ch==='{') stack.push(ch);
    else if (ch===')'||ch===']'||ch==='}') {
      if (stack.pop() !== pair[ch]) return false;
    }
  }
  return stack.length===0;
};

// 8) BFS(격자 최단거리 4방향)
const findShortestPathInGrid = (grid, startRow, startCol, endRow, endCol) => {
  const height = grid.length, width = grid[0].length;
  const visited = Array.from({length:height},()=>Array(width).fill(false));
  const queue = [[startRow,startCol,0]];
  visited[startRow][startCol]=true;
  const directions=[[1,0],[-1,0],[0,1],[0,-1]];
  while (queue.length) {
    const [r,c,d]=queue.shift();
    if (r===endRow && c===endCol) return d;
    for (const [dr,dc] of directions) {
      const nr=r+dr, nc=c+dc;
      if (nr>=0&&nr<height&&nc>=0&&nc<width && !visited[nr][nc] && grid[nr][nc]!==1) {
        visited[nr][nc]=true; queue.push([nr,nc,d+1]);
      }
    }
  }
  return -1;
};
