// rea decompile_all
// name: FUN_00405800
// address: 0x405800
// body: available
// range: 0x405800-0x4059fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00405821) */

int FUN_00405800(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  size_t sVar4;
  undefined1 *_Dst;
  int iVar5;
  int iVar6;
  size_t local_28;
  uint local_24;
  int local_20;
  code *local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_24 = 0x400;
  _Dst = (undefined1 *)FUN_00411976(1,0,&local_8);
  if (local_8 != 0) {
LAB_004059ed:
    FUN_00411a5c(_Dst);
    return local_8;
  }
  local_1c = FUN_00406b98;
  local_10 = 1;
  *_Dst = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  bVar3 = true;
  local_28 = 0;
  do {
    local_20 = 0x100;
LAB_00405874:
    while( true ) {
      sVar4 = local_14;
      if (bVar3) {
        local_28 = FUN_0041112f(_Dst + local_14,local_24 - local_14);
        local_14 = 0;
        local_18 = local_28 + sVar4;
        bVar3 = false;
      }
      if (local_c < local_18) break;
LAB_004058cf:
      if (local_28 == 0) {
LAB_004059e5:
        *param_3 = local_10;
        goto LAB_004059ed;
      }
      if (local_c == 0) {
        if (0xffff < local_24) {
          local_8 = 6;
          goto LAB_004059ed;
        }
        _Dst = (undefined1 *)FUN_00411976(1,_Dst,&local_8);
        if (local_8 != 0) goto LAB_004059ed;
        local_14 = local_24;
        local_24 = local_24 * 2;
      }
      else {
        local_28 = local_18 - local_c;
        _memcpy(_Dst,_Dst + local_c,local_28);
        local_18 = local_18 - local_28;
        local_c = 0;
        local_14 = local_28;
      }
      bVar3 = true;
    }
    pcVar1 = _Dst + local_c;
    iVar6 = local_c;
    if (*pcVar1 != local_20) {
      do {
        if ((_Dst[iVar6] == '\n') || (_Dst[iVar6] == '\r')) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_18);
      if (local_18 <= iVar6) goto LAB_004058cf;
      cVar2 = _Dst[iVar6];
      _Dst[iVar6] = 0;
      if (((*pcVar1 != '#') && (*pcVar1 != '\x1a')) && (local_c < iVar6)) {
        iVar5 = iVar6 - local_c;
        local_8 = (*local_1c)(pcVar1,iVar5,local_10,&local_1c,param_2);
        if (local_8 == -1) {
          local_8 = (*local_1c)(pcVar1,iVar5,local_10,&local_1c,param_2);
        }
        if (local_8 == 0) goto LAB_004059a4;
        goto LAB_004059e5;
      }
LAB_004059a4:
      local_10 = local_10 + 1;
      _Dst[iVar6] = cVar2;
      local_c = iVar6 + 1;
      if (cVar2 == '\n') {
        local_20 = 0xd;
      }
      else {
        local_20 = ((cVar2 != '\r') - 1 & 0xffffff0a) + 0x100;
      }
      goto LAB_00405874;
    }
    local_c = local_c + 1;
  } while( true );
}

