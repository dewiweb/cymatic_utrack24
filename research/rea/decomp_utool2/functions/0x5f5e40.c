// rea decompile_all
// name: FUN_005f5e40
// address: 0x5f5e40
// body: available
// range: 0x5f5e40-0x5f5fc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005f5e40(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 in_EDX;
  
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0xf8) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0xfc) = in_EDX;
  *(int *)(*(int *)(in_ECX + 4) + 0x100) = param_1;
  iVar1 = FUN_005feec0(0x10);
  if (iVar1 != 0) {
    *(int *)(*(int *)(in_ECX + 4) + 0x108) = param_1;
    iVar1 = FUN_005feec0(0x10);
    if (iVar1 != 0) {
      *(int *)(*(int *)(in_ECX + 4) + 0x10c) = param_1;
      iVar1 = FUN_005feec0(0x18);
      if (iVar1 != 0) {
        *(int *)(*(int *)(in_ECX + 4) + 0x110) = param_1;
        iVar1 = FUN_005feec0(0x18);
        if (iVar1 != 0) {
          *(int *)(*(int *)(in_ECX + 4) + 0x114) = param_1;
          iVar1 = FUN_005feec0(0x14);
          if (iVar1 != 0) {
            *(int *)(*(int *)(in_ECX + 4) + 0x118) = param_1;
            iVar1 = FUN_005feec0(3);
            if (iVar1 != 0) {
              *(int *)(*(int *)(in_ECX + 4) + 0x11c) = param_1 + 1;
              iVar1 = FUN_005feec0(5);
              if (iVar1 != 0) {
                *(int *)(*(int *)(in_ECX + 4) + 0x120) = param_1 + 1;
                iVar1 = FUN_005fee30(0x24);
                if (iVar1 != 0) {
                  iVar1 = FUN_005fec40(0x10);
                  if (iVar1 != 0) {
                    iVar1 = FUN_005fed10();
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

