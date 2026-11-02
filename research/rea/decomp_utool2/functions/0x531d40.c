// rea decompile_all
// name: FUN_00531d40
// address: 0x531d40
// body: available
// range: 0x531d40-0x531e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00531d40(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  
  uVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x44c)) {
    bVar3 = *(int *)(in_ECX + 0x44c) != 0;
    do {
      if (bVar3) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x444) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (*(char *)(iVar1 + 0x38) != '\0') {
        uStack_1c = 0x531d8b;
        FUN_0053e510();
        if (uVar2 < *(uint *)(in_ECX + 0x44c)) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x444) + uVar2 * 4);
        }
        else {
          iVar1 = 0;
        }
        *(undefined1 *)(iVar1 + 0x38) = 0;
      }
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(in_ECX + 0x44c);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x44c));
  }
  uStack_1c = 0x531db5;
  FUN_00532710();
  uStack_1c = 0x531dc0;
  iVar1 = FUN_004ae6c0();
  uStack_1c = (uint)(0 < iVar1);
  uStack_20 = 0x531dd4;
  FUN_004f8300();
  uStack_1c = 0x531ddc;
  FUN_00531cb0();
  if ((*(int *)(in_ECX + 0x184) == 0) && (*(int *)(in_ECX + 0x184) != *(int *)(in_ECX + 0xc))) {
    *(int *)(in_ECX + 0x184) = *(int *)(in_ECX + 0xc);
    FUN_006e6400(auStack_28);
    FUN_006ce9f0(1);
    uStack_1c = 0x531e1d;
    FUN_006e7e60();
  }
  uStack_1c = 0x531e28;
  FUN_006e7e60();
  FUN_006e6400(auStack_28);
  FUN_006ce9f0(1);
  uStack_1c = 0x531e4f;
  (**(code **)(**(int **)(in_ECX + 0x1c4) + 8))();
  return;
}

