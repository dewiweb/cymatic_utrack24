// rea decompile_all
// name: FUN_001c00a4
// address: 0x1c00a4
// body: available
// range: 0x1c00a4-0x1c01d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001c00a4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int *local_50;
  char local_4c;
  uint local_34;
  int *piStack_24;
  undefined4 local_20;
  int local_1c;
  int iStack_18;
  
  uVar7 = 0;
  piStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  FUN_001d9f00(&local_50,param_1);
  if (local_4c == '\0') goto LAB_001c0194;
  param_4 = param_4 - local_1c;
  local_34 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4) & 0xb0;
  if (local_34 == 0x20) {
LAB_001c0120:
    if ((local_1c == 0) ||
       (piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34),
       iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,local_20,local_1c), iVar3 == local_1c)) {
      if (local_34 != 0x20) goto LAB_001c0194;
      iVar6 = 0;
      iVar3 = param_4;
      if (0 < param_4) {
        do {
          piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
          bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
          uVar4 = (uint)bVar1;
          if ((piVar2[1] << 0x1c < 0) && (pbVar5 = (byte *)piVar2[9], (byte *)piVar2[10] != pbVar5))
          {
            piVar2[9] = (int)(pbVar5 + 1);
            *pbVar5 = bVar1;
          }
          else {
            uVar4 = (**(code **)(*piVar2 + 0x28))();
          }
          iVar3 = iVar6;
        } while ((uVar4 != 0xffffffff) && (iVar6 = iVar6 + 1, iVar3 = param_4, iVar6 < param_4));
      }
      if (iVar3 == param_4) goto LAB_001c0194;
    }
  }
  else {
    iVar6 = 0;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
        uVar4 = (uint)bVar1;
        if ((piVar2[1] << 0x1c < 0) && (pbVar5 = (byte *)piVar2[9], (byte *)piVar2[10] != pbVar5)) {
          piVar2[9] = (int)(pbVar5 + 1);
          *pbVar5 = bVar1;
        }
        else {
          uVar4 = (**(code **)(*piVar2 + 0x28))();
        }
        iVar3 = iVar6;
      } while ((uVar4 != 0xffffffff) && (iVar6 = iVar6 + 1, iVar3 = param_4, iVar6 < param_4));
    }
    if (iVar3 == param_4) goto LAB_001c0120;
  }
  uVar7 = 1;
LAB_001c0194:
  if (uVar7 != 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar7 = *(uint *)(iVar3 + 0x10) | uVar7;
    if (*(int *)(iVar3 + 0x34) == 0) {
      uVar7 = uVar7 | 1;
    }
    FUN_00161878(iVar3,uVar7,0xffffffff);
  }
  return param_1;
}

