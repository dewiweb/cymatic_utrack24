// rea decompile_all
// name: FUN_0053b140
// address: 0x53b140
// body: available
// range: 0x53b140-0x53b216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0053b140(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 *local_10;
  int local_c;
  
  if (*(undefined **)(in_ECX + 0xc) != PTR_DAT_00c7ed54) {
    iVar3 = FUN_0045c1e0(*(undefined4 *)(in_ECX + 0xc));
    if (iVar3 != 0) {
      piVar4 = (int *)(*(int *)(in_ECX + 0xc) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      cVar2 = FUN_005b5020();
      if (cVar2 != '\0') {
        if (*(int *)(in_ECX + 0x10) == 0) {
          FUN_00636970();
          if ((*(undefined4 **)(in_ECX + 0x18) == local_10) && (*(int *)(in_ECX + 0x1c) == local_c))
          {
            return *(undefined4 *)(in_ECX + 0x20);
          }
          *(undefined4 *)(in_ECX + 0x18) = 0;
          *(undefined4 *)(in_ECX + 0x1c) = 0;
          *(undefined4 *)(in_ECX + 0x20) = 6;
        }
        FUN_0053f050();
        uVar1 = *(undefined4 *)(in_ECX + 0x20);
        if (local_10 != (undefined4 *)0x0) {
          LOCK();
          piVar4 = local_10 + 1;
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*local_10)();
          }
        }
        return uVar1;
      }
    }
  }
  return 6;
}

