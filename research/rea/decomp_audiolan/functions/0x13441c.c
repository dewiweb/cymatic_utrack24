// rea decompile_all
// name: FUN_0013441c
// address: 0x13441c
// body: available
// range: 0x13441c-0x134617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013441c(int *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [68];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  if (*(ushort *)((int)param_1 + 6) == 0) {
    return;
  }
  if (DAT_00134618 <= (uint)(param_2 - param_1[2])) {
    uVar6 = (uint)(*(ushort *)((int)param_1 + 6) >> 3);
    param_1[2] = param_2;
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    iVar8 = *(int *)(*(int *)*param_1 + 0x24);
    FUN_000eea30(auStack_98);
    FUN_00116ec0(auStack_40,iVar8 + 0x1e0);
    FUN_000ec860(auStack_98,*(undefined4 *)(iVar8 + 0x188),2,auStack_40);
    iVar4 = FUN_000eaaa4(auStack_98,uVar6);
    if (iVar4 == 0) {
      while (uVar6 != 0) {
        if (*(ushort *)((int)param_1 + 6) <= *(ushort *)(param_1 + 3)) {
          *(undefined2 *)(param_1 + 3) = 0;
        }
        (**(code **)(**(int **)(*param_1 + (uint)*(ushort *)(param_1 + 3) * 4) + 0x48))(&uStack_b0);
        uVar5 = FUN_0010f674(auStack_30,&uStack_b0,0);
        FUN_000eaa14(auStack_98,uVar5);
        uVar6 = uVar6 - 1;
        iVar4 = *(int *)(*param_1 + (uint)*(ushort *)(param_1 + 3) * 4);
        cVar3 = *(char *)(iVar4 + 0xc9) + '\x01';
        *(char *)(iVar4 + 0xc9) = cVar3;
        if (cVar3 == '\x04') {
          (**(code **)(**(int **)(*param_1 + (uint)*(ushort *)(param_1 + 3) * 4) + 0x48))
                    (&uStack_a4);
          FUN_001477ec(iVar8,&uStack_a4,0x30);
        }
        *(short *)(param_1 + 3) = (short)param_1[3] + 1;
      }
      FUN_00149df0(iVar8 + 0x4a0,auStack_98,0);
      uVar2 = DAT_00134620;
      uVar5 = DAT_0013461c;
      uVar6 = 0;
      if (*(short *)((int)param_1 + 6) != 0) {
        do {
          piVar7 = *(int **)(*param_1 + uVar6 * 4);
          iVar4 = (**(code **)(*piVar7 + 0x4c))(piVar7);
          sVar1 = 0;
          if (iVar4 != 0) {
            sVar1 = (short)piVar7[0x17];
          }
          if (iVar4 != 0 && sVar1 != 0) {
            uStack_ac = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = uVar5;
            uStack_b0 = 0;
            FUN_00116ff0(piVar7[9] + 0x1e0,piVar7 + 0x19,uVar2,(short)piVar7[0x18]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)((int)param_1 + 6));
      }
    }
    FUN_000ee880(auStack_98);
    FUN_000e9f98(auStack_84);
    FUN_000e9f98(auStack_8c);
    return;
  }
  return;
}

