// rea decompile_all
// name: FUN_0001117c
// address: 0x1117c
// body: available
// range: 0x1117c-0x112a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_0001117c(undefined8 param_1,int param_2,undefined4 *param_3,uint param_4,undefined8 param_5,
            uint *param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ushort local_28;
  short local_26;
  longlong local_20;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 *local_10;
  
  if (*param_6 == 0) {
LAB_000111a5:
    param_6[6] = 0xc000000d;
    return 0;
  }
  if (2 < *param_6) {
    if (*param_6 == 4) {
      if (param_2 != 4) goto LAB_000111be;
      if (**(uint **)(param_6 + 4) < 4) {
        param_6[6] = 0xc0000023;
        **(uint **)(param_6 + 4) = 4;
        return 0;
      }
      if (param_4 < 4) {
        return 0;
      }
      **(undefined4 **)(param_6 + 2) = *param_3;
      **(undefined4 **)(param_6 + 4) = 4;
      goto LAB_000111f1;
    }
    if (*param_6 != 7) goto LAB_000111a5;
  }
  uVar3 = (param_4 >> 1) + 2;
  if (((param_2 != 1) && (param_2 != 2)) && (param_2 != 7)) {
LAB_000111be:
    param_6[6] = 0xc0000024;
    return 0;
  }
  puVar1 = *(uint **)(param_6 + 4);
  if (*puVar1 < 2) {
    param_6[6] = 0xc0000023;
    *puVar1 = uVar3;
    return 0;
  }
  local_20 = *(longlong *)(param_6 + 2);
  local_28 = 0;
  local_26 = (short)*puVar1 + -1;
  local_18 = (undefined2)param_4;
  local_16 = local_18;
  local_10 = param_3;
  iVar2 = RtlUnicodeStringToAnsiString(&local_28,&local_18,0);
  if (iVar2 != 0) {
    param_6[6] = 0xc0000023;
    **(uint **)(param_6 + 4) = uVar3;
    return 0;
  }
  if (*(char *)(((ulonglong)local_28 - 1) + local_20) == '\0') {
    uVar3 = (uint)local_28;
  }
  else {
    *(undefined1 *)((ulonglong)local_28 + local_20) = 0;
    uVar3 = local_28 + 1;
  }
  **(uint **)(param_6 + 4) = uVar3;
LAB_000111f1:
  param_6[6] = 0;
  return 0;
}

