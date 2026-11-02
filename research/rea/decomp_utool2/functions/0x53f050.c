// rea decompile_all
// name: FUN_0053f050
// address: 0x53f050
// body: available
// range: 0x53f050-0x53f14a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f050(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *local_20;
  int aiStack_10 [3];
  
  if ((*(int *)(in_ECX + 0x10) == 0) && (*(undefined **)(in_ECX + 0xc) != PTR_DAT_00c7ed54)) {
    iVar3 = FUN_0045c1e0(*(undefined4 *)(in_ECX + 0xc));
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0x20) = 6;
      piVar4 = (int *)(*(int *)(in_ECX + 0xc) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      puVar5 = (undefined4 *)FUN_00548e50();
      uVar1 = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 *)(in_ECX + 0x10) = *puVar5;
      *puVar5 = uVar1;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_20 + 1;
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_20)();
        }
      }
      if (*(int *)(in_ECX + 0x10) != 0) {
        *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x1c);
        cVar2 = FUN_00548d30();
        if (cVar2 == '\0') {
          piVar4 = aiStack_10;
          aiStack_10[0] = 0;
          aiStack_10[1] = 0;
        }
        else {
          piVar4 = (int *)FUN_00636970();
        }
        iVar3 = piVar4[1];
        if ((*(int *)(in_ECX + 0x18) != *piVar4) || (*(int *)(in_ECX + 0x1c) != iVar3)) {
          *(int *)(in_ECX + 0x18) = *piVar4;
          *(int *)(in_ECX + 0x1c) = iVar3;
          FUN_0053bd00();
        }
      }
    }
  }
  iVar3 = *(int *)(in_ECX + 0x10);
  *param_1 = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  return;
}

