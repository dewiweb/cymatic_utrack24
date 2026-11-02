// rea decompile_all
// name: FUN_00120080
// address: 0x120080
// body: available
// range: 0x120080-0x120227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00120080(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 local_20;
  
  iVar3 = DAT_00120228;
  iVar6 = 0;
  iVar5 = DAT_00120228 + 0x28;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[2] = iVar3 + 0x3c;
  param_1[10] = 0;
  *param_1 = iVar3;
  param_1[1] = iVar5;
  *(undefined2 *)(param_1 + 0xb) = 0;
  FUN_001285fc(param_2,0xe0,0,0);
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x30))();
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,2,DAT_0012022c);
  param_1[4] = iVar3;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x30))();
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,2,DAT_00120230);
  param_1[5] = iVar3;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x30))();
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,1,_DAT_00120234);
  param_1[6] = iVar3;
  local_28 = 0x4000000;
  uStack_24 = 0x40000000;
  local_20 = 0;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x150))
                            ((int *)param_1[8],0,s___Settings_00120236 + 2,&local_28);
  param_1[3] = (int)piVar2;
  (**(code **)(*piVar2 + 0x4c))(piVar2,param_1);
  puVar4 = (undefined4 *)FUN_0016d7a4(0x10,DAT_00120244);
  uVar1 = DAT_00120248;
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar4 + 1) = 1;
    *(undefined2 *)((int)puVar4 + 6) = 0x8000;
    *puVar4 = uVar1;
    iVar6 = FUN_0010e7e0(puVar4 + 2);
    iVar6 = iVar6 + -8;
  }
  piVar2 = (int *)param_1[3];
  (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 4))
            ((int)piVar2 + *(int *)(*piVar2 + -0x38),param_1 + 1);
  piVar2 = (int *)param_1[3];
  (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x14))
            ((int)piVar2 + *(int *)(*piVar2 + -0x38),iVar6);
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x8000;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x30))();
  (**(code **)(*piVar2 + 0xb0))();
  return param_1;
}

