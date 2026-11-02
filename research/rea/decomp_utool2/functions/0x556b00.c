// rea decompile_all
// name: FUN_00556b00
// address: 0x556b00
// body: available
// range: 0x556b00-0x556c29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00556b00(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  char local_19;
  int local_18;
  
  uVar6 = 0;
  local_19 = '\0';
  cVar2 = '\0';
  if (0 < *(int *)(in_ECX + 0x30)) {
    do {
      piVar3 = (int *)FUN_0040a090();
      if (*piVar3 == *param_1) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0045c1e0(*piVar3);
      }
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar5 == 0) {
        iVar5 = 0;
        if (uVar6 < *(uint *)(in_ECX + 0x30)) {
          piVar3 = (int *)(*(int *)(in_ECX + 0x28) + uVar6 * 4);
          if (*piVar3 != 0) {
            iVar5 = *piVar3;
          }
          iVar1 = *(uint *)(in_ECX + 0x30) - 1;
          *(int *)(in_ECX + 0x30) = iVar1;
          if (0 < (int)(iVar1 - uVar6)) {
            FUN_004c1df0(piVar3,piVar3 + 1);
          }
        }
        if ((*(int *)(in_ECX + 0x30) * 2 < *(int *)(in_ECX + 0x2c)) &&
           (*(int *)(in_ECX + 0x30) < *(int *)(in_ECX + 0x2c))) {
          FUN_00409cf0();
        }
        if (iVar5 != 0) {
          FUN_00418390();
          FUN_004bfe14(iVar5);
        }
        local_19 = '\x01';
      }
      else {
        uVar6 = uVar6 + 1;
      }
    } while ((int)uVar6 < *(int *)(in_ECX + 0x30));
    cVar2 = local_19;
    if (local_19 != '\0') {
      puVar4 = (undefined4 *)FUN_00633420();
      *(undefined4 *)(in_ECX + 0x20) = *puVar4;
      *(undefined4 *)(in_ECX + 0x24) = puVar4[1];
    }
  }
  return cVar2;
}

