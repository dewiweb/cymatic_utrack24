// rea decompile_all
// name: FUN_000e66bc
// address: 0xe66bc
// body: available
// range: 0xe66bc-0xe69b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e66bc(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined2 auStack_48 [4];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [3];
  
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x6c) + param_2 * 0x1c);
  uVar3 = *puVar5;
  uVar6 = puVar5[1];
  uVar1 = FUN_000b9aac();
  uVar1 = FUN_00159bac(uVar1,uVar3);
  iVar2 = FUN_00061694(uVar1,uVar6);
  uVar1 = DAT_000e69b8;
  if (iVar2 == 0) {
    return;
  }
  if (param_3 == 1) {
    if (param_5 != DAT_000e69bc) {
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x90) + 600))(*(int **)(param_1 + 0x90),param_2,0);
    return;
  }
  if (param_3 == 2) {
    if (param_5 == 0x1011) {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x94) + 0x38))();
      FUN_00155144(&uStack_38,iVar2);
      (**(code **)(*piVar4 + 0x38))(piVar4,uStack_38,auStack_48);
      FUN_001da44c(&uStack_38);
      (**(code **)(**(int **)(param_1 + 0x90) + 0x25c))(*(int **)(param_1 + 0x90),param_2,0,uVar1);
      return;
    }
    if (param_5 != 0x1012) {
      if (param_5 != 0x1020) {
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x90) + 0x25c))
                (*(int **)(param_1 + 0x90),param_2,0,DAT_000e69c4);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x90) + 0x25c))
              (*(int **)(param_1 + 0x90),param_2,0,DAT_000e69c8);
    return;
  }
  if (param_3 != 4) {
    return;
  }
  if (param_5 == 0x1011) {
    piVar4 = *(int **)(param_1 + 0x90);
    FUN_00154f34(&uStack_34,iVar2);
    FUN_0015e784(puVar5 + 3,uStack_34);
    FUN_0015e6f4(puVar5 + 3);
    (**(code **)(*piVar4 + 0x260))(piVar4,param_2,0,uVar1);
    FUN_001da44c(&uStack_34);
    return;
  }
  if (param_5 != 0x1021) {
    return;
  }
  FUN_00155144(auStack_30,iVar2);
  FUN_0010e728(auStack_40,auStack_30[0]);
  FUN_001da44c(auStack_30);
  iVar2 = FUN_0015e888(auStack_40);
  if (iVar2 == 0) {
    FUN_0010e518(auStack_40,&DAT_000e69cc);
    FUN_0010e6f4(auStack_40,puVar5[6] + 1);
  }
  piVar4 = *(int **)(param_1 + 0x90);
  FUN_0015e89c(auStack_40);
  (**(code **)(*piVar4 + 0x260))(piVar4,param_2,0,DAT_000e69d0);
  FUN_0010e7f4(auStack_40);
  return;
}

