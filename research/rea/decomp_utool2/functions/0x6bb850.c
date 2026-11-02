// rea decompile_all
// name: FUN_006bb850
// address: 0x6bb850
// body: available
// range: 0x6bb850-0x6bb928 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb850(int *param_1,char param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  
  if ((*param_1 != *(int *)(in_ECX + 0x30)) && (iVar3 = FUN_0045c1e0(*param_1), iVar3 != 0)) {
    FUN_006bb750();
    piVar4 = (int *)(*param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    LOCK();
    iVar3 = *(int *)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x30) = *param_1;
    UNLOCK();
    piVar4 = (int *)(iVar3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (0 < *(int *)(in_ECX + 0x18)) {
      piVar4 = (int *)(*(int *)(in_ECX + 8) + 0xc);
      LOCK();
      iVar3 = *piVar4;
      if (iVar3 == 0) {
        *piVar4 = 1;
        iVar3 = 0;
      }
      UNLOCK();
      if ((iVar3 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
        UNLOCK();
      }
    }
    *(uint *)(in_ECX + 0x3c) = *(uint *)(in_ECX + 0x3c) & 0xfffffffc;
  }
  uVar1 = *(uint *)(in_ECX + 0x3c);
  uVar5 = uVar1 & 0xfffffffe;
  if (param_2 != '\0') {
    uVar5 = uVar1 | 1;
  }
  uVar6 = uVar5 & 0xfffffffd;
  if (param_3 != '\0') {
    uVar6 = uVar5 | 2;
  }
  if (uVar1 != uVar6) {
    *(uint *)(in_ECX + 0x3c) = uVar6;
    FUN_006bb630();
  }
  return;
}

