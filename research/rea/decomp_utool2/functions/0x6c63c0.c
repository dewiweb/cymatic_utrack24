// rea decompile_all
// name: FUN_006c63c0
// address: 0x6c63c0
// body: available
// range: 0x6c63c0-0x6c647f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c63c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined1 local_50 [24];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined4 local_8;
  
  iVar2 = *(int *)(in_ECX + 0x114);
  if (iVar2 != 0) {
    local_8 = 0x24;
    *(byte *)(iVar2 + 0x68) = *(byte *)(iVar2 + 0x68) & 0xef | 8;
    puVar4 = local_18;
    FUN_0048cbd0(local_28);
    iVar2 = FUN_0040e4d0(puVar4);
    if ((0.0 < *(float *)(iVar2 + 8)) && (0.0 < *(float *)(iVar2 + 0xc))) {
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x114) + 0xb8))(local_38,iVar2);
      uVar3 = FUN_00677570(local_50,uVar3,iVar2);
      FUN_006cf510(uVar3);
    }
    if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
      if (*(int *)(in_ECX + 0xc) == 0) {
LAB_006c644e:
        FUN_006e62c0();
        return;
      }
      cVar1 = FUN_006e6320();
      if (cVar1 != '\0') goto LAB_006c644e;
    }
    FUN_006e62c0();
  }
  return;
}

