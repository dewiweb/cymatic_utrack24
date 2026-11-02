// rea decompile_all
// name: FUN_006e4890
// address: 0x6e4890
// body: available
// range: 0x6e4890-0x6e48fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4890(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_ECX;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *param_1;
  if (*(int *)(in_ECX + 0x98) != iStack_14) {
    uStack_18 = 0x6e48ad;
    cVar4 = FUN_00468d30();
    if (cVar4 == '\0') {
      iVar2 = *param_1;
      if (*(int *)(in_ECX + 0x98) != iVar2) {
        if (iVar2 != 0) {
          LOCK();
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          UNLOCK();
        }
        puVar3 = *(undefined4 **)(in_ECX + 0x98);
        *(int *)(in_ECX + 0x98) = iVar2;
        if (puVar3 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar3 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            iStack_14 = 1;
            uStack_18 = 0x6e48e4;
            (**(code **)*puVar3)();
          }
        }
      }
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
    }
  }
  return;
}

