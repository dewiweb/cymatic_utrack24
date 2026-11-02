// rea decompile_all
// name: FUN_000e2360
// address: 0xe2360
// body: available
// range: 0xe2360-0xe268b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e2360(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [32];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  FUN_0011eda0();
  iVar2 = FUN_000a0f3c();
  if (iVar2 == 0x11) {
    FUN_000f4e84();
    uVar3 = FUN_000f4fc0();
    iVar2 = FUN_0022ed3c(param_1 + 0x25);
    if (iVar2 != 3) {
      uVar4 = FUN_0023299c(auStack_48,auStack_4c);
      FUN_0024331c(param_1 + 0x25,3,uVar4);
      FUN_002329f0(auStack_48);
      uVar4 = FUN_0023299c(auStack_48,auStack_4c);
      FUN_0024331c(param_1 + 0x28,3,uVar4);
      FUN_002329f0(auStack_48);
      uVar4 = FUN_0023299c(auStack_48,auStack_4c);
      FUN_0024331c(param_1 + 0x2b,3,uVar4);
      FUN_002329f0(auStack_48);
    }
    uVar1 = FUN_001b5540(uVar3);
    *(undefined1 *)(param_1 + 0x39) = uVar1;
    if ((char)param_1[0x39] == '\0') {
      pcVar5 = s_disabled_000e2694;
    }
    else {
      pcVar5 = s_enabled_000e268c;
    }
    FUN_000028f8(auStack_44,0x1e,&DAT_000e26a0,pcVar5);
    uVar4 = FUN_00243490(param_1 + 0x25,0);
    FUN_002329fc(uVar4,&DAT_000e26a4);
    uVar4 = FUN_00232964(auStack_20,auStack_44,auStack_24);
    uVar6 = FUN_00243490(param_1 + 0x2b,0);
    FUN_00232a4c(uVar6,uVar4);
    FUN_002329f0(auStack_20);
    if ((char)param_1[0x39] == '\0') {
      iVar2 = FUN_001b5980(uVar3);
      param_1[0x37] = iVar2;
      FUN_000028f8(auStack_44,0x1e,s__d__d__d__d_000e26ac,(char)param_1[0x37],
                   *(undefined1 *)((int)param_1 + 0xdd),*(undefined1 *)((int)param_1 + 0xde),
                   *(undefined1 *)((int)param_1 + 0xdf));
      uVar4 = FUN_00243490(param_1 + 0x25,1);
      FUN_002329fc(uVar4,s_Static_IP_000e26b8);
      uVar4 = FUN_00232964(auStack_48,auStack_44,auStack_4c);
      uVar6 = FUN_00243490(param_1 + 0x2b,1);
      FUN_00232a4c(uVar6,uVar4);
      FUN_002329f0(auStack_48);
      iVar2 = FUN_001b5500(uVar3);
      param_1[0x38] = iVar2;
      FUN_000028f8(auStack_44,0x1e,s__d__d__d__d_000e26ac,(char)param_1[0x38],
                   *(undefined1 *)((int)param_1 + 0xe1),*(undefined1 *)((int)param_1 + 0xe2),
                   *(undefined1 *)((int)param_1 + 0xe3));
      uVar3 = FUN_00243490(param_1 + 0x25,2);
      FUN_002329fc(uVar3,s_Subnet_mask_000e26c4);
      uVar3 = FUN_00232964(auStack_48,auStack_44,auStack_4c);
      uVar4 = FUN_00243490(param_1 + 0x2b,2);
      FUN_00232a4c(uVar4,uVar3);
      FUN_002329f0(auStack_48);
    }
    else {
      uVar3 = FUN_00243490(param_1 + 0x25,1);
      FUN_002329fc(uVar3,s_disabled_000e2694 + 8);
      uVar3 = FUN_00243490(param_1 + 0x2b,1);
      FUN_002329fc(uVar3,s_disabled_000e2694 + 8);
      uVar3 = FUN_00243490(param_1 + 0x25,2);
      FUN_002329fc(uVar3,s_disabled_000e2694 + 8);
      uVar3 = FUN_00243490(param_1 + 0x2b,2);
      FUN_002329fc(uVar3,s_disabled_000e2694 + 8);
    }
    iVar2 = (**(code **)(*param_1 + 0x74))(param_1,1);
  }
  return iVar2;
}

