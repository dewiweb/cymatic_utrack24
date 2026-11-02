// rea decompile_all
// name: FUN_0002262c
// address: 0x2262c
// body: available
// range: 0x2262c-0x227ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0002262c(longlong param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar3 = (param_4 & 0x3ff) << 0x10 | (uint)*(ushort *)(param_1 + 0xf0);
  if ((param_4 & 7) == 0) {
    uVar3 = uVar3 | 0x4000000;
  }
  *param_2 = uVar3;
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 0xc00;
  param_2[1] = *(int *)(param_1 + 0xec) << 0x18 | *(uint *)(param_1 + 0xd4);
  if (param_3 == 0) {
    param_2[2] = *(uint *)(param_1 + 0xd8) | 0xffffff00;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe8) == '\0') {
      *(undefined1 *)(param_1 + 0xe8) = 1;
    }
    puVar6 = param_2 + 3;
    param_2[2] = (*(uint *)(DAT_00029268 + 0x604) << 0x10 |
                 *(uint *)(DAT_00029268 + 0x604) & 0xffffff00) << 8 | *(uint *)(param_1 + 0xd8);
    if (*(char *)(param_1 + 0xb0) == '\0') {
      iVar4 = *(int *)(param_1 + 0x118);
      if (iVar4 != 0) {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x110) + 4);
        do {
          puVar6[*puVar7] = puVar7[1];
          puVar1 = puVar6;
          iVar2 = param_3;
          while (iVar2 = iVar2 + -1, iVar2 != 0) {
            puVar1 = puVar1 + *(uint *)(param_1 + 200);
            puVar1[*puVar7] = puVar7[1];
          }
          puVar7 = puVar7 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      for (puVar5 = *(undefined8 **)(param_1 + 0xf8); puVar5 != (undefined8 *)(param_1 + 0xf8);
          puVar5 = (undefined8 *)*puVar5) {
        (*(code *)puVar5[4])(puVar5,puVar6,param_3);
      }
      iVar4 = *(int *)(param_1 + 0x128);
      if (iVar4 != 0) {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x120) + 4);
        do {
          puVar6[*puVar7] = puVar7[1];
          puVar1 = puVar6;
          iVar2 = param_3;
          while (iVar2 = iVar2 + -1, iVar2 != 0) {
            puVar1 = puVar1 + *(uint *)(param_1 + 200);
            puVar1[*puVar7] = puVar7[1];
          }
          puVar7 = puVar7 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + param_3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    iVar4 = *(int *)(param_1 + 200) * param_3 * 4;
  }
  return iVar4 + 0xc;
}

