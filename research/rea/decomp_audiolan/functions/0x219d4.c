// rea decompile_all
// name: FUN_000219d4
// address: 0x219d4
// body: available
// range: 0x219d4-0x21ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000219d4(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,uint *param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_58;
  int local_38;
  int local_34;
  uint local_2c;
  uint local_4;
  
  local_4 = param_4;
  local_34 = -1;
  local_38 = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_0001eb78();
  }
  local_2c = 0xffffffff;
  uVar8 = 0;
  local_58 = *DAT_00021ac8 * 0x3c + 1;
  piVar7 = *(int **)(&DAT_00001fe4 + param_1);
  do {
    if (piVar7 == (int *)0x0) {
      if (param_6 != (uint *)0x0) {
        *param_6 = local_2c;
      }
      return local_38;
    }
    if ((piVar7[8] & 1U) == 0) {
      if (((&local_4)[uVar8 >> 5] & 1 << (uVar8 & 0x1f)) != 0) {
        iVar2 = FUN_0001eb78();
        iVar6 = piVar7[0x4b];
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = iVar6 - *(int *)(param_1 + 0xdc);
          if (iVar5 < 0) {
            FUN_00024642(0,DAT_00021acc,iVar5,iVar6,*(int *)(param_1 + 0xdc));
            iVar5 = 0;
            piVar7[0x4b] = 0;
          }
        }
        if ((piVar7[0x4c] == 0 && param_3 == 0) || (piVar7[1] == param_3)) {
          if (param_7 == 0) {
LAB_00021a98:
            if (iVar5 < local_58) {
LAB_00021a9e:
              local_58 = iVar5;
              local_38 = (int)piVar7;
              local_34 = iVar2;
              local_2c = uVar8;
            }
          }
          else if ((iVar2 <= iVar1) && (local_34 <= iVar2)) {
            iVar6 = iVar2;
            uVar3 = thunk_FUN_0003fc2c(param_2,iVar1 - iVar2);
            iVar4 = FUN_0003b48a(uVar3,piVar7 + 0xb);
            if (iVar4 != 0) {
              if (local_34 == iVar6) goto LAB_00021a98;
              goto LAB_00021a9e;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    }
    piVar7 = (int *)*piVar7;
  } while( true );
}

