// rea decompile_all
// name: FUN_000b12dc
// address: 0xb12dc
// body: available
// range: 0xb12dc-0xb14ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b12dc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar3 = 0;
  if (iVar1 != 0) {
    local_30 = DAT_000b14f0;
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0x9c))(piVar2);
    FUN_00064a0c(auStack_44,0x2f,0x38,0xac,0x3e);
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_44,1,1,1);
    FUN_00064a0c(auStack_58,0x31,0x3a,0xaa,0x3c);
    local_28 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*local_28 + 0x38))(local_28,auStack_58,0,0,1);
    FUN_00064a0c(auStack_6c,0x6d,0x36,0x6e,0x40);
    local_2c = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*local_2c + 0x38))(local_2c,auStack_6c,0,0,1);
    if (param_3 != 0) {
      if (9 < param_2) {
        param_2 = 9;
      }
      if (param_2 < -9) {
        param_2 = -9;
      }
      uVar3 = FUN_00249f24(param_2);
      uVar3 = FUN_0024a000(uVar3,local_30);
      iVar1 = FUN_00249e8c();
      FUN_00064a0c(auStack_80,iVar1 + 0x6b,0x38,iVar1 + 0x70,0x3e,uVar3);
      piVar2 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar2 + 0x38))(piVar2,auStack_80,1,0,1);
      FUN_00064a58(auStack_80);
    }
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0xa0))(piVar2);
    FUN_00064a58(auStack_6c);
    FUN_00064a58(auStack_58);
    uVar3 = FUN_00064a58(auStack_44);
  }
  return uVar3;
}

