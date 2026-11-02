// rea decompile_all
// name: FUN_000bd334
// address: 0xbd334
// body: available
// range: 0xbd334-0xbd48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bd334(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_000f4e84();
  local_34 = FUN_000f4fc0();
  if (local_28 == 0) {
    uVar1 = FUN_001b57d4(local_34);
  }
  else {
    lVar5 = 0;
    do {
      iVar2 = FUN_0022c84c(param_1 + 4,auStack_38,0);
    } while (iVar2 != 0);
    puVar3 = (undefined4 *)FUN_000cbaf0();
    uVar1 = (**(code **)*puVar3)(puVar3);
    FUN_00115524(auStack_58,param_1 + 4,uVar1);
    piVar4 = (int *)FUN_000cbaf0();
    iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_58,0,0xffffffff);
    if (iVar2 == 0) {
      lVar5 = FUN_001ba154(auStack_58);
    }
    else if (iVar2 == 1) {
      uVar1 = FUN_001b29dc(auStack_58);
      FUN_00002898(s_ERROR__Get_free_space_failed_wit_000bd490,uVar1);
      lVar5 = 0;
    }
    else {
      FUN_00002898(s_ERROR__Get_free_space_failed_000bd4b8);
    }
    lVar5 = lVar5 * 0x400;
    uVar1 = (undefined4)((ulonglong)lVar5 >> 0x20);
    FUN_000938c4(local_34,uVar1,(int)lVar5,uVar1,lVar5);
    uVar1 = FUN_001b57d4(local_34);
    FUN_00115568(auStack_58);
  }
  return uVar1;
}

