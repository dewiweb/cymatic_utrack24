// rea decompile_all
// name: FUN_005333a0
// address: 0x5333a0
// body: available
// range: 0x5333a0-0x533530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005333a0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 0x4a0) = 0;
  *(undefined4 *)(in_ECX + 0x4a4) = 0;
  *(undefined4 *)(in_ECX + 0x4a8) = 1;
  *(undefined4 *)(in_ECX + 0x4ac) = 48000;
  *(undefined4 *)(in_ECX + 0x4b0) = 0x18;
  *(undefined4 *)(in_ECX + 0x4c4) = 0xffffffff;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    do {
      FUN_0053e510();
      if (uVar3 < *(uint *)(in_ECX + 0x4bc)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar2 + 0x39) = 0;
    } while ((int)uVar3 < *(int *)(in_ECX + 0x4bc));
  }
  if (*(int *)(in_ECX + 0x4cc) != 0) {
    uStack_20 = 0x533443;
    FID_conflict__free(*(void **)(in_ECX + 0x4c8));
    *(undefined4 *)(in_ECX + 0x4c8) = 0;
    *(undefined4 *)(in_ECX + 0x4cc) = 0;
  }
  *(undefined4 *)(in_ECX + 0x4d0) = 0;
  FUN_00532710();
  FUN_00531cb0();
  if ((*(byte *)(in_ECX + 0x2a1) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x2a1) = *(byte *)(in_ECX + 0x2a1) | 0x10;
    iVar2 = *(int *)(in_ECX + 0x244);
    if ((iVar2 == 0) ||
       (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
      FUN_006cc240();
    }
  }
  FUN_006e6400(auStack_28);
  FUN_006ce9f0(1);
  *(byte *)(in_ECX + 0x2a0) = *(byte *)(in_ECX + 0x2a0) & 0xef | 8;
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_28);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_28);
  FUN_006ce9f0(1);
  return;
}

