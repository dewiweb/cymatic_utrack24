// rea decompile_all
// name: FUN_004f9d00
// address: 0x4f9d00
// body: available
// range: 0x4f9d00-0x4f9db9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9d00(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    local_8 = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_004f9bc0();
        if (iVar1 < 0) {
          iVar2 = iVar2 + 1;
        }
        else {
          local_8 = local_8 + iVar1;
        }
        iVar1 = *(int *)(in_ECX + 0x7c);
        iVar3 = iVar3 + 1;
        iVar4 = local_8;
      } while (iVar3 < iVar1);
    }
    local_c = 0;
    if (iVar2 != 0) {
      local_c = (*(int *)(in_ECX + 0x18) - iVar4) / iVar2;
    }
    iVar4 = 0;
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_004f9bc0();
        if (iVar1 < 0) {
          iVar1 = local_c;
        }
        FUN_006e9790(local_8,0,iVar1,*(undefined4 *)(in_ECX + 0x1c));
        local_8 = local_8 + iVar1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x7c));
    }
  }
  return;
}

