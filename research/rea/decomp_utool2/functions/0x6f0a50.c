// rea decompile_all
// name: FUN_006f0a50
// address: 0x6f0a50
// body: available
// range: 0x6f0a50-0x6f0c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0a50(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  FUN_006f2e00(param_1);
  in_ECX[0x28] = -1;
  piVar7 = in_ECX + 0x31;
  if ((((in_ECX[0x32] != in_ECX[0x37]) || (in_ECX[0x33] != in_ECX[0x38])) ||
      (in_ECX[0x34] != in_ECX[0x39])) || (param_1._3_1_ = '\x01', *piVar7 != in_ECX[0x36])) {
    param_1._3_1_ = '\0';
  }
  if (param_2 == '\0') {
    FUN_006f09a0();
    goto LAB_006f0c01;
  }
  if (in_ECX[0xbf] == 0) {
    uVar2 = in_ECX[0x2d] - in_ECX[0x37];
    uVar5 = in_ECX[0x2d] - in_ECX[0x32];
    uVar8 = (int)uVar2 >> 0x1f;
    uVar9 = (int)uVar5 >> 0x1f;
    in_ECX[0xbf] = ((int)((uVar2 ^ uVar8) - uVar8) <= (int)((uVar5 ^ uVar9) - uVar9)) + 1;
  }
  if (in_ECX[0xbf] == 1) {
    FUN_006f2e00(in_ECX + 0x2c);
    if (in_ECX[0x37] < in_ECX[0x32]) {
      local_18 = *piVar7;
      local_14 = in_ECX[0x32];
      local_10 = in_ECX[0x33];
      local_c = in_ECX[0x34];
      local_8 = '\0';
      FUN_006f2e00(in_ECX + 0x36);
      FUN_006f2e00(&local_18);
      in_ECX[0xbf] = 2;
LAB_006f0b9e:
      if ((local_8 != '\0') && (local_8 = '\0', local_18 != 0)) {
        FUN_00415ff0(&local_18);
      }
    }
  }
  else {
    FUN_006f2e00(in_ECX + 0x2c);
    if (in_ECX[0x37] < in_ECX[0x32]) {
      local_18 = *piVar7;
      local_14 = in_ECX[0x32];
      local_10 = in_ECX[0x33];
      local_c = in_ECX[0x34];
      local_8 = '\0';
      FUN_006f2e00(in_ECX + 0x36);
      FUN_006f2e00(&local_18);
      in_ECX[0xbf] = 1;
      goto LAB_006f0b9e;
    }
  }
  iVar4 = in_ECX[0xbd];
  piVar6 = (int *)(*(int *)(iVar4 + 0x18) + 0xc);
  LOCK();
  iVar3 = *piVar6;
  if (iVar3 == 0) {
    *piVar6 = 1;
    iVar3 = 0;
  }
  UNLOCK();
  if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(iVar4 + 0x18) + 0xc) = 0;
    UNLOCK();
  }
LAB_006f0c01:
  (**(code **)(*in_ECX + 0xd4))();
  FUN_006f0510();
  FUN_006f0800();
  iVar3 = in_ECX[0xbc];
  if (iVar3 != 0) {
    if ((((in_ECX[0x32] == in_ECX[0x37]) && (in_ECX[0x33] == in_ECX[0x38])) &&
        (in_ECX[0x34] == in_ECX[0x39])) && (*piVar7 == in_ECX[0x36])) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (param_1._3_1_ != cVar1) {
      piVar7 = (int *)(*(int *)(iVar3 + 4) + 0xc);
      LOCK();
      iVar4 = *piVar7;
      if (iVar4 == 0) {
        *piVar7 = 1;
        iVar4 = 0;
      }
      UNLOCK();
      if ((iVar4 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0xc) = 0;
        UNLOCK();
      }
    }
  }
  return;
}

