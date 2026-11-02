// rea decompile_all
// name: FUN_0006cd8c
// address: 0x6cd8c
// body: available
// range: 0x6cd8c-0x6d11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_0006cd8c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc) << 0x1e |
          (*(uint *)(*(int *)(param_1 + 0x28) + 4) & 0x3f) << 0x15;
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xb) != '\0') {
    uVar4 = uVar4 | 0x2000;
  }
  local_2c = uVar4 | (*(byte *)(*(int *)(param_1 + 0x28) + 0xe) & 1) << 0xe |
             *(uint *)(param_1 + 4) & 0x7f;
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x20) == '\0') {
    local_2c = local_2c | 0x100;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x21) != '\0') {
    local_2c = local_2c | 0x400;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 2);
  if (cVar1 == '\0') {
    local_28 = (*(byte *)(param_1 + 0x20) & 3) << 0x15;
    FUN_0006d1b8(param_1,&local_50,*(undefined1 *)(param_1 + 0x20));
    local_38 = *(undefined4 *)(param_1 + 0x18);
    local_3c = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    if (cVar1 == '\x01') {
      if (*(int *)(*(int *)(param_1 + 0x28) + 0x1c) == 0) {
        iVar5 = FUN_001a0808(0x100,9);
        *(int *)(*(int *)(param_1 + 0x28) + 0x1c) = iVar5;
        if (iVar5 == 0) {
          return false;
        }
      }
      local_28 = local_28 & 0xfe07ffff | (*(byte *)(param_1 + 0x20) & 3) << 0x15 |
                 (*(byte *)(param_1 + 0x21) & 3) << 0x17 | (**(byte **)(param_1 + 0x28) & 1) << 0x13
                 | (*(byte *)(*(int *)(param_1 + 0x28) + 1) & 1) << 0x14;
      bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 0xe);
      local_2c = local_2c & 0xc7ffbfff | 0x18000000 | (bVar2 & 1) << 0xe;
      if ((bVar2 & 1) == 0) {
        uVar3 = *(undefined1 *)(param_1 + 0x20);
      }
      else {
        uVar3 = *(undefined1 *)(param_1 + 0x21);
      }
      FUN_0006d1b8(param_1,&local_50,uVar3);
      local_44 = *(undefined4 *)(param_1 + 0x18);
      local_48 = *(undefined4 *)(param_1 + 0x1c);
      local_38 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c);
      local_30 = local_30 & 0xffffffc0 | 0x20U >> *(sbyte *)(param_1 + 0x21);
      iVar5 = *(int *)(param_1 + 0x24);
      local_3c = local_38;
      local_34 = local_38;
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 == '\x03') {
          local_2c = local_2c | 0x10000000;
          local_28 = (*(byte *)(param_1 + 0x20) & 3) << 0x15 |
                     (**(byte **)(param_1 + 0x28) & 1) << 0x13;
          FUN_0006d1b8(param_1,&local_50,*(undefined1 *)(param_1 + 0x20));
          local_3c = *(undefined4 *)(param_1 + 0x1c);
          local_44 = *(undefined4 *)(param_1 + 0x18);
        }
        goto LAB_0006d100;
      }
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x21);
      local_2c = local_2c | 0x8000000;
      local_28 = (*(byte *)(param_1 + 0x21) & 3) << 0x17 |
                 (*(byte *)(*(int *)(param_1 + 0x28) + 1) & 1) << 0x14;
      FUN_0006d1b8(param_1,&local_50,*(undefined1 *)(param_1 + 0x21));
      local_38 = *(undefined4 *)(param_1 + 0x18);
      local_48 = *(undefined4 *)(param_1 + 0x1c);
      iVar5 = *(int *)(param_1 + 0x24);
    }
    if (iVar5 != -1) {
      local_40 = local_40 & 0xfff0ffff | 0x80000000 | (*(uint *)(param_1 + 0x24) & 0xf) << 0x10;
    }
  }
LAB_0006d100:
  iVar5 = FUN_000739d0(*(undefined4 *)(param_1 + 4),&local_50);
  return iVar5 != 0;
}

