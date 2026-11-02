// rea decompile_all
// name: FUN_006a1740
// address: 0x6a1740
// body: available
// range: 0x6a1740-0x6a17be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006a1740(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  uVar3 = *(uint *)(in_ECX + 0xa0);
  if (0 < (int)uVar3) {
    bVar5 = uVar3 != 0;
    do {
      if (bVar5) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x98) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 <= param_1) {
        if (uVar4 + 1 < uVar3) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x98) + 4 + uVar4 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (param_1 < iVar2) {
          cVar1 = FUN_006d01e0(param_1,param_2,1);
          uVar3 = 0xffffffff;
          if (cVar1 != '\0') {
            uVar3 = uVar4;
          }
          return uVar3;
        }
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar3;
    } while ((int)uVar4 < (int)uVar3);
  }
  return 0xffffffff;
}

