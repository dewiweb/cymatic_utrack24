// rea decompile_all
// name: FUN_004bfc4c
// address: 0x4bfc4c
// body: available
// range: 0x4bfc4c-0x4bfd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004bfc4c(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int local_5c;
  int local_58;
  undefined4 uStack_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  undefined1 *local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = *(int *)(param_1 + 0x30);
  local_5 = 1;
LAB_004bfd32:
  do {
    do {
      do {
        local_c = local_c + -1;
        if (local_c < 0) {
          return CONCAT31((int3)((uint)local_c >> 8),local_5);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x28) + local_c * 4);
      } while ((*(byte *)(iVar1 + 0x68) & 2) == 0);
      local_40 = (undefined1 *)0x4bfc7e;
      cVar2 = FUN_004c0d86();
    } while (cVar2 != '\0');
    local_40 = local_20;
    local_44 = 0x4bfc97;
    FUN_004a4c72();
  } while ((local_18 < 1) || (local_14 < 1));
  local_40 = (undefined1 *)0x4bfcb2;
  cVar2 = FUN_004c04c2();
  if ((cVar2 == '\0') || (*(char *)(iVar1 + 0x6c) != '\0')) goto LAB_004bfce4;
  local_10 = (undefined1 *)&local_44;
  local_44 = in_stack_0000001c;
  local_40 = (undefined1 *)in_stack_00000020;
  uStack_48 = 0x4bfcd9;
  local_40 = (undefined1 *)FUN_004a4c0c();
  local_44 = 0x4bfce2;
  FUN_0047cce7();
  goto LAB_004bfd2b;
LAB_004bfce4:
  local_5c = *(int *)(iVar1 + 0x10);
  local_58 = *(int *)(iVar1 + 0x14);
  local_40 = (undefined1 *)(in_stack_00000020 + local_58);
  local_44 = in_stack_0000001c + local_5c;
  local_10 = (undefined1 *)&local_5c;
  FUN_004a97cd();
  local_58 = param_2;
  local_5c = iVar1;
  cVar2 = FUN_004bfc4c();
  if (cVar2 != '\0') {
LAB_004bfd2b:
    local_5 = 0;
  }
  goto LAB_004bfd32;
}

