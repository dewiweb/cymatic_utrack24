// rea decompile_all
// name: FUN_0018a0fc
// address: 0x18a0fc
// body: available
// range: 0x18a0fc-0x18a187 inclusive
// range: 0x199544-0x1996e7 inclusive
// range: 0x1997a0-0x19992f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0018a0fc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 local_30;
  undefined1 local_2c [12];
  
  cVar1 = *(char *)(param_4 + 0x10);
  if (cVar1 == '\x01') {
    piVar5 = (int *)FUN_00197134(param_1,param_3,param_4,param_1);
    return piVar5;
  }
  if (cVar1 != 'p') {
    if (cVar1 != 'q') {
      return param_1;
    }
    iVar6 = *(int *)param_1[0x1f];
    iVar4 = FUN_001c6b14(200,DAT_00199930);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_0018bba0(iVar4,0x3100,DAT_00199934);
      *piVar5 = DAT_00199938;
      piVar5[0x18] = *(int *)param_1[0x1f];
      (**(code **)(*param_1 + 0xd4))(&local_30,param_1);
      iVar4 = FUN_001506d0(piVar5 + 0x1a,*(undefined2 *)(param_4 + 0x16),param_3,&local_30);
      piVar5[0x31] = iVar4;
      piVar5[0x30] = *(int *)(param_4 + 0x28);
      (**(code **)(*param_1 + 0xd4))(&local_30,param_1);
      uVar7 = 0;
      if (*(char *)(piVar5[0x18] + 0x15d) != '\0') {
        uVar7 = 2000;
      }
      iVar4 = FUN_0015d72c(piVar5,param_1,&local_30,iVar6 + 0x484,0,uVar7,0,piVar5);
      if (iVar4 != 0) {
        if (piVar5[0x31] == 0) {
          FUN_0018bb58(piVar5);
          piVar5 = (int *)0x0;
        }
        else {
          uVar10 = *(undefined4 *)(param_4 + 0x34);
          uVar3 = *(undefined2 *)(param_4 + 0x30);
          uVar8 = *(undefined4 *)(param_4 + 0x2c);
          uVar2 = *(undefined1 *)(param_4 + 0x24);
          uVar7 = FUN_001be138(piVar5);
          iVar4 = FUN_0018a664(param_1,uVar7,uVar2,piVar5[0x30],uVar8,uVar3,
                               *(char *)(param_4 + 0x32) != '\0',uVar10);
          if (iVar4 == 0) {
            if (*(char *)((int)piVar5 + 0x4d) == '\0') {
              FUN_0015a02c(piVar5[0x31],7,0);
              FUN_0018bb58(piVar5);
            }
            piVar5 = (int *)0x0;
          }
        }
        return piVar5;
      }
      FUN_0015da00(piVar5,1);
    }
    return (int *)0x0;
  }
  iVar6 = *(int *)param_1[0x1f];
  iVar4 = FUN_001c6b14(0xd0,DAT_001996e8);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_0018bba0(iVar4,DAT_001996f0,DAT_001996ec);
    *piVar5 = DAT_001996f4;
    piVar5[0x18] = *(int *)param_1[0x1f];
    uVar9 = *(ushort *)(param_4 + 0x30);
    if (0x400 < uVar9) {
      uVar9 = 0x400;
    }
    (**(code **)(*param_1 + 0xd4))(local_2c,param_1);
    iVar4 = FUN_00150594(piVar5 + 0x1a,*(undefined2 *)(param_4 + 0x16),param_3,local_2c);
    piVar5[0x32] = iVar4;
    *(undefined1 *)(piVar5 + 0x30) = *(undefined1 *)(param_4 + 0x24);
    piVar5[0x31] = *(int *)(param_4 + 0x28);
    (**(code **)(*param_1 + 0xd4))(local_2c,param_1);
    uVar7 = 0;
    if (*(char *)(piVar5[0x18] + 0x15d) != '\0') {
      uVar7 = 2000;
    }
    iVar4 = FUN_0015d72c(piVar5,param_1,local_2c,iVar6 + 0x484,0,uVar7,0,piVar5);
    if (iVar4 != 0) {
      if (piVar5[0x32] == 0) {
        FUN_0018bb58(piVar5);
        piVar5 = (int *)0x0;
      }
      else {
        uVar8 = *(undefined4 *)(param_4 + 0x2c);
        uVar7 = FUN_001be138(piVar5);
        iVar4 = FUN_0018a5c8(param_1,uVar7,(char)piVar5[0x30],piVar5[0x31],uVar8,uVar9);
        if (iVar4 == 0) {
          if (*(char *)((int)piVar5 + 0x4d) == '\0') {
            local_30 = 0;
            FUN_00159d80(piVar5[0x32],1,0,0,0,0,0,1);
            FUN_0018bb58(piVar5);
          }
          piVar5 = (int *)0x0;
        }
      }
      return piVar5;
    }
    FUN_0015da00(piVar5,1);
  }
  return (int *)0x0;
}

