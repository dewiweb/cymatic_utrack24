// rea decompile_all
// name: FUN_000e6ab4
// address: 0xe6ab4
// body: available
// range: 0xe6ab4-0xe6d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e6ab4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,code *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  uVar1 = FUN_000b9aac();
  uVar1 = FUN_00159c48(uVar1,param_2);
  local_48[0] = param_2;
  iVar2 = FUN_001dbb14(param_1 + 0x50,local_48);
  if (param_3 == 1) {
    return;
  }
  if (param_3 != 2) {
    if (param_3 != 4) {
      return;
    }
    if (param_5 == (code *)0x502) {
      piVar5 = *(int **)(param_1 + 0x90);
      bVar7 = *(short *)(iVar2 + 0x1a) == 0;
      if (bVar7) {
        FUN_00156bf8(auStack_2c,uVar1);
        FUN_0015e784(iVar2 + 0xc,auStack_2c[0]);
      }
      FUN_0015e6f4(iVar2 + 0xc);
      (**(code **)(*piVar5 + 0x238))(piVar5,param_2,0,0x502);
      if (!bVar7) {
        return;
      }
      puVar3 = auStack_2c;
    }
    else {
      if (param_5 == (code *)0x503) {
        uVar4 = FUN_001569ec(uVar1);
        FUN_000028d8(auStack_40,&LAB_000e6d54,uVar4);
        piVar5 = *(int **)(param_1 + 0x90);
        if (*(short *)(iVar2 + 0x1a) == 0) {
          FUN_001569ec(uVar1);
        }
        pcVar6 = *(code **)(*piVar5 + 0x238);
LAB_000e6d2c:
        (*pcVar6)(piVar5,param_2,0,param_5);
        return;
      }
      if (param_5 != FUN_00001010) {
        return;
      }
      piVar5 = *(int **)(param_1 + 0x90);
      FUN_001569a8(&uStack_30,uVar1);
      FUN_0015e784(iVar2 + 4,uStack_30);
      FUN_0015e6f4(iVar2 + 4);
      (**(code **)(*piVar5 + 0x238))(piVar5,param_2,0,FUN_00001010);
      puVar3 = &uStack_30;
    }
    FUN_001da44c(puVar3);
    return;
  }
  if (param_5 == (code *)0x600) {
    piVar5 = *(int **)(param_1 + 0x90);
  }
  else {
    if (param_5 != FUN_00001010) {
      if (param_5 != (code *)0x1020) {
        return;
      }
      piVar5 = *(int **)(param_1 + 0x90);
      pcVar6 = *(code **)(*piVar5 + 0x234);
      goto LAB_000e6d2c;
    }
    piVar5 = *(int **)(param_1 + 0x90);
  }
  (**(code **)(*piVar5 + 0x234))(piVar5,param_2,0,param_5);
  return;
}

