// rea decompile_all
// name: FUN_0008e2ac
// address: 0x8e2ac
// body: available
// range: 0x8e2ac-0x8e4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008e2ac(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_98 [4];
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined1 auStack_40 [40];
  
  FUN_0017afd4(param_1 + 0x2dc,0xffffffff);
  if (*(char *)(param_1 + 0x2fc) != '\0') {
    *(undefined1 *)(param_1 + 0x2fc) = 0;
    FUN_001d6158(&local_80,0,0x400);
    local_44 = 0;
    local_74 = *(undefined4 *)(_DAT_0008e4c4 + 0xc);
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    FUN_0017afd4(param_1 + 0x140,0xffffffff);
    FUN_001d42f8(auStack_50,*(undefined4 *)(param_1 + 0x160),local_70);
    FUN_001d41f8(&local_80,s___status_0008e4c6 + 2,auStack_50,local_70);
    FUN_001d42f8(auStack_50,*(undefined4 *)(param_1 + 0x164),local_70);
    FUN_001d41f8(&local_80,s_message_0008e4d0,auStack_50,local_70);
    FUN_0017b0f0(param_1 + 0x140);
    FUN_001d62a8(auStack_98,0,0x100);
    iVar1 = FUN_001d6abc(auStack_40,auStack_98,0,0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0x20;
    *(undefined4 *)(iVar1 + 0x20) = 4;
    FUN_001d7b74(&local_80,auStack_40);
    uVar3 = (local_8c - local_90) + 0xd3;
    if (*(uint *)(param_1 + 0x308) < uVar3) {
      FUN_0019f30c(*(undefined4 *)(param_1 + 0x300));
      iVar1 = FUN_001a0808(uVar3,1);
      *(int *)(param_1 + 0x300) = iVar1;
      if (iVar1 == 0) {
        FUN_000028a4(DAT_0008e4dc,uVar3);
        *(undefined4 *)(param_1 + 0x304) = 0;
        *(undefined1 *)(param_1 + 0x2fc) = 1;
        *(undefined4 *)(param_1 + 0x308) = 0;
        FUN_0017b0f0(param_1 + 0x2dc);
        FUN_001523dc(auStack_40);
        FUN_0018a280(local_90);
        FUN_0019f30c(local_94);
        FUN_0015242c(&local_80);
        return 0;
      }
      *(uint *)(param_1 + 0x308) = uVar3;
    }
    iVar1 = FUN_000028d8(*(undefined4 *)(param_1 + 0x300),DAT_0008e4d8,local_8c - local_90);
    uVar2 = FUN_001d8d38(auStack_98);
    FUN_00003418(*(int *)(param_1 + 0x300) + iVar1,uVar2);
    *(int *)(param_1 + 0x304) = (local_8c - local_90) + iVar1;
    FUN_001523dc(auStack_40);
    FUN_0018a280(local_90);
    FUN_0019f30c(local_94);
    FUN_0015242c(&local_80);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x300);
  param_2[1] = *(undefined4 *)(param_1 + 0x304);
  param_2[2] = *(undefined4 *)(param_1 + 0x304);
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  return 1;
}

