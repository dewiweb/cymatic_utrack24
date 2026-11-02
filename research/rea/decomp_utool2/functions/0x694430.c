// rea decompile_all
// name: FUN_00694430
// address: 0x694430
// body: available
// range: 0x694430-0x69462b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00694430(int *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721cf9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((((char)in_ECX[0x25] != '\0') || ((*(byte *)((int)in_ECX + 0x69) & 0x10) != 0)) ||
     ((in_ECX[3] != 0 &&
      (cVar1 = FUN_006e6320(DAT_00c76070 ^ (uint)&stack0xfffffffc), cVar1 == '\0')))) {
    local_20 = 99;
    local_1c = 2;
    local_18 = 0;
    cVar1 = FUN_006e5ec0(&local_20);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
  }
  cVar1 = FUN_004ad910();
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 1;
  }
  if ((*piVar5 == 0xd) && ((*(byte *)(piVar5 + 1) & 7) == 0)) {
    FUN_00697280();
    if ((char)in_ECX[0x26] != '\0') {
      FUN_0045c990(&DAT_00c05994);
      local_8 = 0;
      (**(code **)(in_ECX[0x1c] + 0x18))(&param_1);
      piVar5 = param_1 + -2;
      if (piVar5 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return 1;
      }
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      FID_conflict__free(piVar5);
      ExceptionList = local_10;
      return 1;
    }
    pcVar2 = *(code **)(*in_ECX + 0xb8);
    if (pcVar2 == FUN_00696820) {
      FUN_006cddc0(0x10003002);
      ExceptionList = local_10;
      return *(undefined1 *)((int)in_ECX + 0xa1);
    }
  }
  else {
    if (*piVar5 != 0x1b) {
      if (((uint)piVar5[2] < 0x20) && ((*(char *)((int)in_ECX + 0x9e) == '\0' || (piVar5[2] != 9))))
      {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00622070();
      local_8 = 1;
      (**(code **)(in_ECX[0x1c] + 0x18))(uVar3);
      FUN_00637c10();
      iVar4 = FUN_0061d910();
      in_ECX[0x41] = iVar4;
      ExceptionList = local_10;
      return 1;
    }
    FUN_00697280();
    FUN_00696020(in_ECX[0x44],0);
    pcVar2 = *(code **)(*in_ECX + 0xbc);
    if (pcVar2 == FUN_00696810) {
      FUN_006cddc0(0x10003003);
      goto LAB_0069457d;
    }
  }
  (*pcVar2)();
LAB_0069457d:
  ExceptionList = local_10;
  return *(undefined1 *)((int)in_ECX + 0xa1);
}

