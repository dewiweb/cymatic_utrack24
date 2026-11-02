// rea decompile_all
// name: FUN_0048d720
// address: 0x48d720
// body: available
// range: 0x48d720-0x48d84e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0048d720(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint in_ECX;
  uint uVar4;
  undefined4 *in_EDX;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined1 auStack_5c [8];
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *local_4c;
  int *local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  local_c = *(int *)(in_ECX + 0x30);
  uVar4 = in_ECX & 0xffffff00;
  local_8 = in_ECX & 0xffffff00;
  local_14 = in_ECX;
  local_10 = in_EDX;
  while (local_c = local_c + -1, -1 < local_c) {
    iVar1 = *(int *)(*(int *)(local_14 + 0x28) + local_c * 4);
    if (((*(byte *)(iVar1 + 0x68) & 2) != 0) && (*(int *)(iVar1 + 0x24) == 0)) {
      local_4c = local_28;
      puStack_50 = (undefined1 *)0x48d77a;
      local_48 = (int *)(iVar1 + 0x10);
      FUN_0044db90();
      uVar4 = local_8;
      if ((0 < local_20) && (0 < local_1c)) {
        if (((*(byte *)(iVar1 + 0x68) & 4) == 0) || (*(char *)(iVar1 + 0x6c) != '\0')) {
          iVar2 = *(int *)(iVar1 + 0x10);
          local_48 = (int *)(in_stack_00000018 + *(int *)(iVar1 + 0x14));
          local_4c = (undefined1 *)(in_stack_00000014 + iVar2);
          FUN_00474700(auStack_5c,iVar2,*(int *)(iVar1 + 0x14));
          in_EDX = local_10;
          cVar3 = FUN_0048d720();
          uVar4 = local_8 & 0xff;
          local_8 = uVar4;
          if (cVar3 != '\0') {
            uVar4 = 1;
            local_8 = uVar4;
          }
        }
        else {
          puStack_50 = local_38;
          local_4c = (undefined1 *)in_stack_00000014;
          local_48 = (int *)in_stack_00000018;
          uStack_54 = 0x48d7b6;
          FUN_0046fc10();
          if (*(char *)(in_EDX + 2) != '\0') {
            *(undefined1 *)(in_EDX + 2) = 0;
            local_48 = (int *)0x48d7c7;
            (**(code **)(*(int *)*in_EDX + 0x34))();
          }
          local_48 = (int *)local_38;
          local_4c = (undefined1 *)0x48d7d2;
          (**(code **)(*(int *)*in_EDX + 0x1c))();
          local_8 = 1;
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4 & 0xff;
}

