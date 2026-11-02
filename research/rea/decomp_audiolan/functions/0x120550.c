// rea decompile_all
// name: FUN_00120550
// address: 0x120550
// body: available
// range: 0x120550-0x12072f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00120550(int *param_1,code *param_2,uint param_3,undefined4 param_4,int param_5,
                  uint *param_6,uint *param_7,undefined4 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_50 [4];
  int local_4c;
  undefined1 auStack_40 [12];
  int *piStack_34;
  code *local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  piVar9 = (int *)0x0;
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_0010e728(auStack_40,param_8);
  iVar3 = FUN_0015e6b4(auStack_40);
  if (iVar3 != 0) {
    iVar3 = *param_1;
    if (*(char *)(iVar3 + 0x214) == '\x04') {
      param_3 = (uint)*(ushort *)(iVar3 + 0x200);
    }
    FUN_0010f620(auStack_50,*(undefined2 *)(iVar3 + 500),param_3,param_4,0);
    bVar2 = false;
    do {
      iVar3 = param_1[2];
      if (param_1[2] == 0) {
LAB_00120614:
        if (bVar2) {
          FUN_00147fbc(*param_1);
        }
        uVar8 = *param_6;
        if (*param_7 != 0) {
          uVar5 = *param_7 & 0xe000000;
          if (uVar5 == 0) {
            uVar8 = uVar8 | 0x20000;
          }
          else if (uVar5 == 0x2000000) {
            uVar8 = uVar8 | 0x10000;
          }
          else if (uVar5 == 0x4000000) {
            uVar8 = uVar8 | 0x8000;
          }
        }
        uVar6 = FUN_0015e89c(auStack_40);
        if (*(int *)(*param_1 + 0x65c) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 2;
        }
        piVar9 = (int *)(*local_30)(param_1,param_3,local_4c,0,param_5,uVar8,*param_7 | uVar5 | 1,
                                    uVar6);
        if (piVar9 != (int *)0x0) {
          iVar3 = FUN_001be020(param_1 + 1,piVar9);
          if (iVar3 == 0) {
            (**(code **)(*piVar9 + 0x3c))(piVar9);
            piVar9 = (int *)0x0;
          }
          else {
            FUN_00128fd0(piVar9,0);
          }
        }
        break;
      }
      while( true ) {
        iVar4 = FUN_0010f598(auStack_50,iVar3 + 0x40);
        bVar10 = iVar4 < 0;
        bVar11 = iVar4 == 0;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (bVar10) {
          iVar4 = 0;
        }
        if (bVar11) break;
        iVar7 = *(int *)(iVar3 + iVar4 * 4 + 0x15c);
        if (iVar7 == 0) goto LAB_00120614;
        bVar1 = 0;
        if (iVar4 != 0) {
          bVar1 = *(byte *)(iVar3 + 0x164);
        }
        iVar3 = iVar7;
        if (iVar4 != 0 && (bVar1 & 0x80) != 0) goto LAB_00120614;
      }
      if (iVar3 == 0) goto LAB_00120614;
      if (param_5 == 0) {
        FUN_00148458(*param_1);
        break;
      }
      bVar2 = true;
      iVar3 = local_4c + 1;
      bVar10 = local_4c != -2;
      local_4c = iVar3;
    } while (bVar10);
  }
  FUN_0010e7f4(auStack_40);
  return piVar9;
}

