// rea decompile_all
// name: FUN_0007eec8
// address: 0x7eec8
// body: available
// range: 0x7eec8-0x7f123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007eec8(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_70 [2];
  undefined1 auStack_68 [13];
  undefined1 local_5b;
  undefined1 auStack_58 [5];
  undefined1 local_53;
  undefined1 auStack_50 [13];
  undefined1 local_43;
  undefined1 auStack_40 [5];
  undefined1 local_3b;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [24];
  
  if (param_5 == 0) {
    FUN_0008cb30(param_4);
    FUN_0008c1a0(auStack_34);
    FUN_0008c2dc(local_70,2,3);
    local_5b = 0xb;
    FUN_0008bec0(auStack_34,local_70);
    iVar2 = FUN_0008c660(param_4,auStack_34,0);
    if (iVar2 != 0) {
      FUN_0008c1a0(auStack_40);
      FUN_0008c2dc(auStack_58,3,1);
      local_43 = 0xb;
      FUN_0008bec0(auStack_40,auStack_58);
      iVar2 = FUN_0008c660(param_4,auStack_40,1);
      if (iVar2 != 0) {
        FUN_0008c478(param_4,0xb);
        FUN_0008c350(auStack_58);
        FUN_0008c1b4(auStack_40);
        FUN_0008c350(local_70);
        puVar5 = auStack_34;
        goto LAB_0007eff8;
      }
      FUN_0008c350(auStack_58);
      FUN_0008c1b4(auStack_40);
    }
    FUN_0008c350(local_70);
    FUN_0008c1b4(auStack_34);
    return 0xffffffe4;
  }
  uVar1 = FUN_000467b0(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(*(int *)(param_2 + 4) + 0x60)
                       ,0,2);
  iVar2 = FUN_0018a5b8(3,uVar1);
  uVar1 = FUN_001e3fb4();
  FUN_001e400c(uVar1,*(undefined4 *)(param_1 + 0x28));
  iVar3 = FUN_001e3f1c();
  FUN_0008ca60(param_4);
  FUN_0008c1a0(auStack_38);
  local_70[0] = 0;
  local_70[1] = 8;
  FUN_0008c314(auStack_68,2,2,iVar2 << 2);
  local_53 = 0xb;
  FUN_0008bec0(auStack_38,auStack_68);
  iVar4 = FUN_0008c5f8(param_4,auStack_38,0);
  if (iVar4 != 0) {
    FUN_0008c1a0(auStack_2c);
    local_70[0] = iVar3 << 2;
    local_70[1] = 8;
    FUN_0008c314(auStack_50,3,1,iVar2 << 2);
    local_3b = 0xb;
    FUN_0008bec0(auStack_2c,auStack_50);
    iVar2 = FUN_0008c5f8(param_4,auStack_2c,1);
    if (iVar2 != 0) {
      FUN_0008beb4(param_4,0xb);
      FUN_0008c350(auStack_50);
      FUN_0008c1b4(auStack_2c);
      FUN_0008c350(auStack_68);
      puVar5 = auStack_38;
LAB_0007eff8:
      FUN_0008c1b4(puVar5);
      return 0;
    }
    FUN_0008c350(auStack_50);
    FUN_0008c1b4(auStack_2c);
  }
  FUN_0008c350(auStack_68);
  FUN_0008c1b4(auStack_38);
  return 0xffffffe4;
}

