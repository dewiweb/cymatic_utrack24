// rea decompile_all
// name: FUN_00562950
// address: 0x562950
// body: available
// range: 0x562950-0x562cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562950(void)

{
  int in_ECX;
  char local_d4;
  undefined1 local_b4 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined1 *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined1 local_7d;
  undefined1 local_7c [4];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined1 *local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_c;
  char local_5;
  
  local_14 = 0x2000000;
  local_7d = *(int *)(in_ECX + 0x11c) != 0;
  local_60 = local_7c;
  if ((bool)local_7d) {
    local_74 = *(uint *)(in_ECX + 0x6c);
    local_68 = local_74 | 0x2000000;
    *(uint *)(in_ECX + 0x6c) = local_68;
    local_64 = local_68;
  }
  else {
    local_78 = *(uint *)(in_ECX + 0x6c);
    local_70 = local_78 & 0xfdffffff;
    *(uint *)(in_ECX + 0x6c) = local_70;
    local_6c = local_70;
  }
  if ((*(byte *)(in_ECX + 0x154) >> 3 & 1) != 0) {
    local_84 = *(uint *)(in_ECX + 0x6c);
    local_88 = *(int *)(in_ECX + 0x6c);
    local_1c = (local_84 & 0xffcfffff) + (local_88 + 0x100000U & 0x300000);
    *(int *)(in_ECX + 0x6c) = local_1c;
    *(byte *)(in_ECX + 0x154) = *(byte *)(in_ECX + 0x154) & 0xf7;
    local_18 = local_1c;
  }
  FUN_00562d00();
  local_8c = *(uint *)(in_ECX + 0x6c);
  if (((local_8c & 0x40000000) == 0) &&
     ((local_90 = *(uint *)(in_ECX + 0x80), (local_90 & 1) != 0 ||
      (local_94 = *(uint *)(in_ECX + 0x78), (local_94 & 1) != 0)))) {
    local_d4 = '\x01';
  }
  else {
    local_d4 = '\0';
  }
  local_5 = local_d4;
  local_24 = 0x80000;
  local_98 = local_b4;
  if (local_d4 == '\0') {
    local_b0 = *(uint *)(in_ECX + 0x6c);
    local_a8 = local_b0 & 0xfff7ffff;
    *(uint *)(in_ECX + 0x6c) = local_a8;
    local_a4 = local_a8;
  }
  else {
    local_ac = *(uint *)(in_ECX + 0x6c);
    local_a0 = local_ac | 0x80000;
    *(uint *)(in_ECX + 0x6c) = local_a0;
    local_9c = local_a0;
  }
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x6c);
  for (local_c = *(int *)(in_ECX + 0x11c); local_c != 0; local_c = *(int *)(local_c + 0x120)) {
    FUN_00562950();
    if ((*(uint *)(local_c + 0x6c) & 1) == 0) {
      local_3c = *(uint *)(local_c + 0x70);
      local_38 = *(uint *)(in_ECX + 0x70) | local_3c;
      *(uint *)(in_ECX + 0x70) = local_38;
      local_48 = *(uint *)(local_c + 0x80);
      local_44 = *(uint *)(in_ECX + 0x80) | local_48;
      *(uint *)(in_ECX + 0x80) = local_44;
      local_54 = *(uint *)(local_c + 0x78);
      local_50 = *(uint *)(in_ECX + 0x78) | local_54;
      *(uint *)(in_ECX + 0x78) = local_50;
      local_4c = local_50;
      local_40 = local_44;
      local_34 = local_38;
    }
    else {
      local_30 = *(uint *)(local_c + 0x70);
      local_2c = local_30 & 0xfffffffe | *(uint *)(in_ECX + 0x70);
      *(uint *)(in_ECX + 0x70) = local_2c;
      local_28 = local_2c;
    }
  }
  *(uint *)(in_ECX + 0x70) = *(uint *)(in_ECX + 0x70) & 0xffcfffff;
  return;
}

