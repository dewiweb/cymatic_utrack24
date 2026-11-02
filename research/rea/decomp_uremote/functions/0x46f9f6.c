// rea decompile_all
// name: FUN_0046f9f6
// address: 0x46f9f6
// body: available
// range: 0x46f9f6-0x46fbcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0046f9f6(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char ****ppppcVar7;
  rsize_t _DstSize;
  uint uVar8;
  undefined4 *puVar9;
  char *in_ECX;
  int iVar10;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  char ***local_38;
  undefined1 local_34 [4];
  char ***local_30 [5];
  uint local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x46fa02;
  uVar5 = FUN_00460724();
  local_8 = 0;
  piVar6 = (int *)FUN_004711d6(uVar5);
  local_8 = 0xffffffff;
  std::locale::~locale((locale *)&local_44);
  FUN_00470052(local_34);
  local_8 = 1;
  cVar1 = *in_ECX;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    local_3c = 1;
  }
  else if ((cVar1 == '0') && ((in_ECX[1] == 'x' || (in_ECX[1] == 'X')))) {
    local_3c = 2;
  }
  else {
    local_3c = 0;
  }
  ppppcVar7 = (char ****)local_30[0];
  if (local_1c < 0x10) {
    ppppcVar7 = local_30;
  }
  if (*(char *)ppppcVar7 != '\x7f') {
    ppppcVar7 = (char ****)local_30[0];
    if (local_1c < 0x10) {
      ppppcVar7 = local_30;
    }
    if ('\0' < *(char *)ppppcVar7) {
      uVar8 = param_4;
      if (local_1c < 0x10) {
        local_38 = (char ***)local_30;
      }
      else {
        local_38 = local_30[0];
      }
      while (((cVar1 = *(char *)local_38, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < uVar8 - local_3c))) {
        uVar8 = uVar8 - (int)cVar1;
        _DstSize = (param_4 - uVar8) + 1;
        _memmove_s(in_ECX + uVar8 + 1,_DstSize,in_ECX + uVar8,_DstSize);
        param_4 = param_4 + 1;
        in_ECX[uVar8] = '\0';
        if ('\0' < *(char *)((int)local_38 + 1)) {
          local_38 = (char ***)((int)local_38 + 1);
        }
      }
    }
  }
  iVar3 = local_3c;
  uVar8 = *(uint *)(param_2 + 0x18);
  if (((int)uVar8 < 1) || (uVar8 <= param_4)) {
    iVar10 = 0;
  }
  else {
    iVar10 = uVar8 - param_4;
  }
  uVar8 = *(uint *)(param_2 + 0x10) & 0x1c0;
  if (uVar8 != 0x40) {
    if (uVar8 == 0x100) {
      puVar9 = (undefined4 *)FUN_0046ff50(param_5,param_6,local_3c);
      param_4 = param_4 - iVar3;
      puVar9 = (undefined4 *)FUN_0046fbd0(*puVar9,puVar9[1],param_3,iVar10);
    }
    else {
      puVar9 = (undefined4 *)FUN_0046fbd0(param_5,param_6,param_3,iVar10);
    }
    param_5 = *puVar9;
    param_6 = puVar9[1];
    iVar10 = 0;
  }
  uVar4 = (**(code **)(*piVar6 + 8))();
  local_44 = CONCAT31(local_44._1_3_,uVar4);
  puVar9 = (undefined4 *)FUN_0046ff82(local_40,param_4,local_44,param_5,param_6);
  uVar5 = *puVar9;
  uVar2 = puVar9[1];
  *(undefined4 *)(param_2 + 0x18) = 0;
  FUN_0046fbd0(uVar5,uVar2,param_3,iVar10);
  FID_conflict__Tidy(1,0);
  FUN_005b9f18();
  return;
}

