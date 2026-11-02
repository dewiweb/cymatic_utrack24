// rea decompile_all
// name: FUN_00692ed0
// address: 0x692ed0
// body: available
// range: 0x692ed0-0x69303e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00692ed0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar5;
  int local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721b31;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x97) == '\0') {
    fVar5 = 3.4028235e+38;
  }
  else {
    fVar5 = (float)((*(int *)(*(int *)(in_ECX + 0x7c) + 0xb8) - *(int *)(in_ECX + 0xfc)) + -3);
  }
  if (0.0 < fVar5) {
    FUN_004a0d50(in_ECX + 0x114,*(undefined4 *)(in_ECX + 0x128));
    local_8 = 0;
    cVar1 = FUN_004a0e90();
    while (cVar1 != '\0') {
      if (in_XMM2_Da < local_54 + local_58) {
        if (in_XMM2_Da < local_58) {
          iVar3 = local_5c + -1;
          local_5c = 0;
          if (0 < iVar3) {
            local_5c = iVar3;
          }
LAB_00693009:
          piVar4 = (int *)(local_28 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          ExceptionList = local_10;
          return local_5c;
        }
        if (in_XMM1_Da <= local_4c) goto LAB_00693009;
        if (in_XMM1_Da < local_48) {
          local_5c = FUN_004a1cc0();
          goto LAB_00693009;
        }
      }
      cVar1 = FUN_004a0e90();
    }
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  iVar3 = FUN_00693140(uVar2);
  ExceptionList = local_10;
  return iVar3;
}

