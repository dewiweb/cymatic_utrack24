// rea decompile_all
// name: FUN_00028dbc
// address: 0x28dbc
// body: available
// range: 0x28dbc-0x28f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00028dbc(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar2 = DAT_00028f2c;
  if (param_3 != 0x21) goto LAB_00028ec0;
  cVar1 = *(char *)(param_2 + 0x100);
  puVar6 = *(undefined **)(DAT_00028f2c + 0x10);
  if (cVar1 == '\0') {
    puVar5 = *(undefined **)(DAT_00028f2c + 0xc);
    if (*(int *)(param_2 + 800) != 0) {
      puVar5 = *(undefined **)(DAT_00028f2c + 0x14);
    }
  }
  else if (cVar1 == '\x01') {
    puVar5 = *(undefined **)(DAT_00028f2c + 0x18);
    if (*(int *)(param_2 + 800) == 0) goto LAB_00028e22;
  }
  else if (cVar1 == '\x02') {
    puVar5 = puVar6;
    if (*(int *)(param_2 + 800) != 0) {
      puVar5 = *(undefined **)(DAT_00028f2c + 0x1c);
    }
  }
  else {
LAB_00028e22:
    puVar5 = &DAT_00028f30;
  }
  if (cVar1 == '\0') {
    puVar6 = *(undefined **)(DAT_00028f2c + 0xc);
    if (*(int *)(param_2 + 800) != 0) {
      puVar6 = *(undefined **)(DAT_00028f2c + 0x14);
    }
  }
  else if (cVar1 == '\x01') {
    puVar6 = *(undefined **)(DAT_00028f2c + 0x18);
    if (*(int *)(param_2 + 800) == 0) goto LAB_00028e58;
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(param_2 + 800) != 0) {
      puVar6 = *(undefined **)(DAT_00028f2c + 0x1c);
    }
  }
  else {
LAB_00028e58:
    puVar6 = &DAT_00028f30;
  }
  uVar4 = FUN_00025d12(puVar6,puVar5 + 0x100);
  iVar10 = param_2 + DAT_00028f34;
  if (uVar4 < 0x101) {
    cVar1 = *(char *)(param_2 + 0x100);
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 800) == 0) {
        puVar6 = *(undefined **)(iVar2 + 0xc);
      }
      else {
        puVar6 = *(undefined **)(iVar2 + 0x14);
      }
    }
    else if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 800) == 0) goto LAB_00028ea4;
      puVar6 = *(undefined **)(iVar2 + 0x18);
    }
    else if (cVar1 == '\x02') {
      if (*(int *)(param_2 + 800) == 0) {
        puVar6 = *(undefined **)(iVar2 + 0x10);
      }
      else {
        puVar6 = *(undefined **)(iVar2 + 0x1c);
      }
    }
    else {
LAB_00028ea4:
      puVar6 = &DAT_00028f30;
    }
    FUN_001e57d8(iVar10,puVar6);
  }
  else {
    *(undefined1 *)(param_2 + 0x45c) = 0;
  }
  FUN_0001d794(iVar10,param_2 + 0x108);
LAB_00028ec0:
  *(undefined4 *)(param_2 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x440) = *DAT_00028f38;
  puVar3 = DAT_00028f3c;
  uVar7 = DAT_00028f3c[1];
  uVar8 = DAT_00028f3c[2];
  uVar9 = DAT_00028f3c[3];
  *(undefined4 *)(param_2 + 0x444) = *DAT_00028f3c;
  *(undefined4 *)(param_2 + 0x448) = uVar7;
  *(undefined4 *)(param_2 + 0x44c) = uVar8;
  *(undefined4 *)(param_2 + 0x450) = uVar9;
  *(undefined4 *)(param_2 + 0x454) = puVar3[4];
  *(short *)(param_2 + 0x55c) = (short)param_3;
  *(undefined2 *)(param_2 + 0x55e) = 1;
  *(undefined4 *)(param_2 + 0x560) = 0;
  *(undefined4 *)(param_2 + 0x564) = 1;
  *(undefined4 *)(param_2 + 0x568) = 0;
  *(undefined4 *)(param_2 + 0x56c) = 1;
  *(undefined4 *)(param_2 + 0x570) = 0;
  *(undefined1 *)(param_2 + 0x57a) = 0;
  *(undefined1 *)(param_2 + 0x57b) = 0;
  *(undefined4 *)(param_2 + 0x574) = 0;
  *(undefined1 *)(param_2 + 0x578) = 0;
  *(undefined1 *)(param_2 + 0x579) = 0;
  *(undefined4 *)(param_2 + 0x580) = 0;
  uVar7 = DAT_00028f40;
  *(int *)(param_2 + 0x588) = param_2;
  *(undefined4 *)(param_2 + 0x584) = uVar7;
  FUN_001e9dd8(param_1,param_2 + 0x32c);
  return;
}

