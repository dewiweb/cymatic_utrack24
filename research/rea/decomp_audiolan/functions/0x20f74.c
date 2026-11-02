// rea decompile_all
// name: FUN_00020f74
// address: 0x20f74
// body: available
// range: 0x20f74-0x2112f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00020f74(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint local_64;
  undefined1 auStack_60 [4];
  char *local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50;
  bool local_4f;
  undefined1 local_4e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  int *local_28;
  char *pcStack_20;
  int local_1c;
  undefined4 local_18;
  
  local_58 = 0;
  local_50 = (undefined1)param_3;
  local_38 = 0;
  local_2c = 0;
  cVar1 = *param_1;
  local_5c = param_1;
  local_54 = param_2;
  pcStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  if (cVar1 == '\0') {
    local_3c = 0;
  }
  else {
    local_4f = true;
    local_3c = 0;
    local_4e = 0;
    FUN_000373c8(auStack_60,0x82,0,7,0,2,0xf,0xf,DAT_00021130);
    local_4e = 0;
    FUN_000211d8(auStack_60,0x1f);
  }
  local_4f = cVar1 != '\0';
  iVar2 = FUN_00021160(auStack_60,2);
  if (iVar2 != 0x2000) {
    return (int *)0x0;
  }
  uVar3 = FUN_00021160(auStack_60,3);
  uVar6 = uVar3 & 0x3f0;
  uVar3 = uVar3 & 0xf;
  uVar8 = 0;
  local_64 = 1;
  iVar2 = 1;
  if (uVar6 != 0x90) {
    if (uVar6 == 0xa0) {
      uVar7 = 2;
      uVar8 = 7;
      iVar2 = 3;
      local_64 = 2;
      goto LAB_00021018;
    }
    if (uVar6 != 0xc0) {
      if (uVar6 == 0xe0) {
        uVar7 = 3;
        uVar8 = 0xb;
        iVar2 = 7;
      }
      else {
        uVar7 = 0;
      }
      goto LAB_00021018;
    }
  }
  uVar7 = 1;
LAB_00021018:
  piVar4 = (int *)*DAT_00021134;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_00024e58(0x28);
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar4[2] = (int)param_1;
      piVar5 = DAT_00021134;
      piVar4[3] = local_1c;
      *(undefined1 *)(piVar4 + 9) = uVar8;
      *(undefined1 *)(piVar4 + 4) = uVar7;
      piVar4[5] = local_64;
      piVar4[6] = uVar6 >> 4;
      piVar4[7] = uVar3;
      piVar4[8] = iVar2;
      piVar4[1] = 0;
      uVar3 = 0;
      *piVar4 = *piVar5;
      *piVar5 = (int)piVar4;
      local_28 = piVar4 + 1;
      if (local_64 != 0) {
        do {
          piVar5 = (int *)FUN_00024e58(0x38);
          if (piVar5 == (int *)0x0) {
            return (int *)0x0;
          }
          piVar5[1] = (int)param_1;
          piVar5[2] = (int)piVar4;
          piVar5[3] = local_1c + uVar3;
          *(char *)(piVar5 + 4) = (char)local_18;
          piVar5[10] = 0;
          piVar5[0xd] = 0;
          if (*param_1 == '\0') {
            *(undefined1 *)((int)piVar5 + 0x11) = 0;
            piVar5[9] = 0;
          }
          else {
            *(undefined1 *)((int)piVar5 + 0x11) = 1;
            piVar5[9] = 0;
            *(undefined1 *)((int)piVar5 + 0x12) = 0;
            FUN_000373c8(piVar5,0x82,0,7,0,2,0xf,0xf,DAT_00021130);
            uVar8 = 1;
            *(undefined1 *)((int)piVar5 + 0x12) = 0;
            FUN_000211d8(piVar5,0x1f);
            *(undefined1 *)((int)piVar5 + 0x11) = uVar8;
          }
          *piVar5 = 0;
          *local_28 = (int)piVar5;
          uVar9 = 0x13;
          local_28 = piVar5;
          FUN_00024e6a(piVar5[1]);
          FUN_00024ec8(piVar5[3],piVar5[1],uVar9,0);
          FUN_00024f22(piVar5[1]);
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_64);
      }
      return piVar4;
    }
    if (((char *)piVar4[2] == param_1) && (piVar4[3] == local_1c)) break;
    piVar4 = (int *)*piVar4;
  }
  return piVar4;
}

