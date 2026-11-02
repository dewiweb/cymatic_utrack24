// rea decompile_all
// name: FUN_0064e1f0
// address: 0x64e1f0
// body: available
// range: 0x64e1f0-0x64e388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64e37d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64e384 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064e1f0(int param_1)

{
  char cVar1;
  char *_Memory;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = *(int *)(in_ECX + 0x240);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_00650a40();
      return;
    }
    *(int *)(in_ECX + 0x240) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      FUN_00650a40();
      FUN_00655fd0();
      return;
    }
  }
  uVar4 = *(uint *)(in_ECX + 0x28);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(in_ECX + 0x28) = uVar4 | 8;
  }
  _Memory = *(char **)(in_ECX + 0x260);
  uVar4 = param_1 + 1;
  if (_Memory != (char *)0x0) {
    if (uVar4 <= *(uint *)(in_ECX + 0x264)) goto LAB_0064e2ba;
    *(undefined4 *)(in_ECX + 0x260) = 0;
    *(undefined4 *)(in_ECX + 0x264) = 0;
    FID_conflict__free(_Memory);
  }
  if (uVar4 == 0) {
    _Memory = (char *)0x0;
  }
  else {
    _Memory = (char *)FUN_004c554b(uVar4);
    if (_Memory != (char *)0x0) {
      *(char **)(in_ECX + 0x260) = _Memory;
      *(uint *)(in_ECX + 0x264) = uVar4;
      goto LAB_0064e2ba;
    }
  }
  FUN_00656020();
LAB_0064e2ba:
  if (_Memory == (char *)0x0) {
    FUN_00655fd0();
    return;
  }
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
    (**(code **)(in_ECX + 0x10))();
    FUN_006598a0(param_1);
    iVar2 = FUN_00650a40();
    if (iVar2 == 0) {
      _Memory[param_1] = '\0';
      cVar1 = *_Memory;
      pcVar3 = _Memory;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      local_24 = 0xffffffff;
      local_1c = pcVar3 + 1;
      if (pcVar3 == _Memory + param_1) {
        local_1c = pcVar3;
      }
      local_10 = 0;
      local_c = 0;
      local_14 = 0;
      pcVar3 = local_1c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      local_18 = (int)pcVar3 - (int)(local_1c + 1);
      local_20 = _Memory;
      iVar2 = FUN_0064bb50(&local_24,local_18);
      if (iVar2 != 0) {
        FUN_006563b0();
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

