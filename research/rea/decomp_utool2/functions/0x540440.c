// rea decompile_all
// name: FUN_00540440
// address: 0x540440
// body: available
// range: 0x540440-0x54060f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00540440(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  DWORD DVar6;
  int in_ECX;
  char *pcVar7;
  int local_8;
  
  puVar2 = (undefined4 *)FUN_005bdf30();
  iVar3 = FUN_00448730(*puVar2,&DAT_0073cac4);
  piVar4 = (int *)(local_8 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (iVar3 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    pcVar7 = "Invalid resolution.";
    FUN_0045c990("Invalid resolution.");
    FUN_00633c50(&param_2,pcVar7);
    piVar4 = (int *)(param_2 + -8);
    if (piVar4 == &DAT_00bfe124) {
      return 0;
    }
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 != 0) {
      return 0;
    }
    FID_conflict__free(piVar4);
    return 0;
  }
  if (param_1 != 5) {
    iVar3 = FUN_005bd4e0();
    iVar3 = iVar3 * *(int *)(in_ECX + 0x24);
    iVar5 = FUN_0053e9b0();
    if (iVar3 <= iVar5) {
      if (param_2 == 0) {
        return 0;
      }
      pcVar7 = "Too many channels.";
      goto LAB_005405ea;
    }
    if (iVar3 < *(int *)(in_ECX + 0x5c)) {
      if (param_2 == 0) {
        return 0;
      }
      pcVar7 = "Too many tracks.";
      goto LAB_005405ea;
    }
    cVar1 = FUN_005bdd60();
    if (cVar1 == '\0') {
      if (param_2 == 0) {
        return 0;
      }
      pcVar7 = "Invalid sample rate.";
      goto LAB_005405ea;
    }
  }
  if (**(char **)(in_ECX + 0x70) != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar6 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar6 & 0x10) == 0) {
      cVar1 = FUN_0053f750();
      if (cVar1 == '\0') {
        if (param_2 == 0) {
          return 0;
        }
        pcVar7 = "Missing Wav file.";
      }
      else {
        cVar1 = FUN_0053b610();
        if (cVar1 != '\0') {
          return 1;
        }
        if (param_2 == 0) {
          return 0;
        }
        pcVar7 = "Missing MIDI file.";
      }
      goto LAB_005405ea;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  pcVar7 = "Missing Project file.";
LAB_005405ea:
  FUN_0045c990(pcVar7);
  FUN_00633c50(&param_2,pcVar7);
  FUN_00637c10();
  return 0;
}

