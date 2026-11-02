// rea decompile_all
// name: FUN_0049d6b6
// address: 0x49d6b6
// body: available
// range: 0x49d6b6-0x49d7da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049d6b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  void *_Memory;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined1 local_6c [64];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  uint local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x49d6c2;
  local_28 = 0;
  uVar2 = FUN_00491566(&LAB_0049d437,FUN_0041f3a2);
  local_18 = 0;
  local_14[0] = 0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  cVar1 = FUN_0049d446(param_2,uVar2,param_4,local_6c,&local_18,local_14,&local_28,&local_20,
                       &local_24);
  if (cVar1 != '\0') {
    iVar5 = local_18 * 4;
    local_1c = _malloc(iVar5 * local_14[0]);
    local_8 = 0;
    _Memory = _malloc(local_14[0] << 2);
    local_8._0_1_ = 1;
    uVar3 = 0;
    pvVar4 = local_1c;
    if (local_14[0] != 0) {
      do {
        *(void **)((int)_Memory + uVar3 * 4) = pvVar4;
        uVar3 = uVar3 + 1;
        pvVar4 = (void *)((int)pvVar4 + iVar5);
      } while (uVar3 < local_14[0]);
    }
    local_2c = _Memory;
    uVar3 = FUN_0049d4d1(param_3,param_4,local_6c,_Memory);
    if ((char)uVar3 != '\0') {
      if (((local_20 & 4) == 0) && (*(short *)(param_4 + 0x16) == 0)) {
        uVar3 = uVar3 & 0xffffff00;
      }
      else {
        uVar3 = 1;
      }
      FUN_0049d521(param_1,uVar3,local_14[0],_Memory);
      local_8 = (uint)local_8._1_3_ << 8;
      _free(_Memory);
      local_8 = 0xffffffff;
      _free(local_1c);
      return param_1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    _free(_Memory);
    local_8 = 0xffffffff;
    _free(local_1c);
  }
  uVar2 = FUN_004c6ae2();
  return uVar2;
}

