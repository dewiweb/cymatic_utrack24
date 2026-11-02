// rea decompile_all
// name: FUN_00531cb0
// address: 0x531cb0
// body: available
// range: 0x531cb0-0x531d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00531cb0(void)

{
  int iVar1;
  undefined *puVar2;
  int in_ECX;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined *local_18;
  
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    bVar4 = *(int *)(in_ECX + 0x4bc) != 0;
    puVar2 = PTR_DAT_00c7ed54;
    do {
      if (bVar4) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar3 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (*(undefined **)(iVar1 + 0xc) != puVar2) {
        local_1c = *(undefined4 *)(iVar1 + 0xc);
        uStack_20 = 0x531cf5;
        local_18 = puVar2;
        iVar1 = FUN_0045c1e0();
        puVar2 = PTR_DAT_00c7ed54;
        if (iVar1 != 0) {
          *(undefined1 *)(in_ECX + 0x84) = 0;
          goto LAB_00531d11;
        }
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(in_ECX + 0x4bc);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x4bc));
  }
  *(undefined1 *)(in_ECX + 0x84) = 1;
LAB_00531d11:
  FUN_006e6400(auStack_24);
  FUN_006ce9f0(1);
  return;
}

