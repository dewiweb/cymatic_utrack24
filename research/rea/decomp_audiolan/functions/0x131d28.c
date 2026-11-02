// rea decompile_all
// name: FUN_00131d28
// address: 0x131d28
// body: available
// range: 0x131d28-0x131f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00131d28(int *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *unaff_r7;
  int *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined1 auStack_64 [60];
  uint local_28;
  
  if (100 < (uint)(param_2 - param_1[6])) {
    param_1[6] = param_2;
    piVar4 = (int *)param_1[8];
joined_r0x00131d54:
    do {
      piVar3 = piVar4;
      if (piVar3 == (int *)0x0) break;
      if (piVar3 == (int *)0x0) {
        unaff_r7 = (int *)param_1[8];
      }
      if (piVar3 != (int *)0x0) {
        unaff_r7 = (int *)piVar3[2];
      }
      piVar4 = unaff_r7;
      if (300 < (uint)(param_2 - piVar3[3])) {
        local_88 = (uint)*(ushort *)(piVar3 + 8);
        local_28 = (uint)*(ushort *)((int)piVar3 + 0x22);
        iVar7 = piVar3[9];
        uVar1 = *(ushort *)((int)piVar3 + 0x26);
        if (*(short *)((int)param_1 + 0x16) != 0) {
          local_7c = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_74 = 0;
          local_6c = 0;
          local_6e = local_70;
          local_68 = local_70;
          local_66 = local_70;
          iVar5 = FUN_0010f718(auStack_64);
          *(undefined4 *)(iVar5 + 0x20) = 0;
          *(undefined4 *)(iVar5 + 0x24) = 0;
          *(undefined1 *)(iVar5 + 0x35) = 1;
          FUN_000ee880(iVar5 + -0x1c);
          local_8c = *(undefined4 *)(*param_1 + 0x188);
          local_90 = piVar3 + 4;
          FUN_0012e910(param_1 + 3,local_88,&local_80,0x2300);
          local_8c = 0;
          local_84 = DAT_00131f64;
          local_88 = 0;
          local_90 = (int *)(uint)uVar1;
          FUN_000eafac(&local_80,DAT_00131f68,local_28,(short)iVar7);
          FUN_00149df0(*param_1 + 0x4a0,&local_80,0);
          FUN_000ee880(&local_80);
          FUN_000e9f98(&local_6c);
          FUN_000e9f98(&local_74);
          local_7c = 0;
          local_80 = 0;
          local_78 = 0;
        }
        piVar6 = (int *)param_1[8];
        if (piVar6 == (int *)0x0 || piVar3 == (int *)0x0) {
          if (piVar3 == (int *)0x0) goto joined_r0x00131d54;
        }
        else {
          if (piVar6 == piVar3) {
            param_1[8] = piVar6[2];
          }
          if ((int *)param_1[9] == piVar3) {
            param_1[9] = ((int *)param_1[9])[1];
          }
          if (piVar3[1] != 0) {
            *(int *)(piVar3[1] + 8) = piVar3[2];
          }
          if (piVar3[2] != 0) {
            *(int *)(piVar3[2] + 4) = piVar3[1];
          }
          piVar3[1] = 0;
          piVar3[2] = 0;
          param_1[10] = param_1[10] + -1;
        }
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    } while( true );
  }
  if ((uint)(param_2 - param_1[7]) < 0x7d1) {
    return;
  }
  param_1[7] = param_2;
  FUN_0010f718(&local_90);
  sVar2 = *(short *)((int)param_1 + 0x16);
  while (sVar2 != 0) {
    FUN_0012e568(&local_80,param_1 + 3);
    FUN_0010f738(&local_90,&local_80);
    iVar7 = FUN_0015ea90(&local_90);
    if (iVar7 != 0) break;
    sVar2 = *(short *)((int)param_1 + 0x16);
  }
  FUN_0012e648(param_1 + 3);
  return;
}

