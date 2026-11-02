// rea decompile_all
// name: FUN_0004dc9c
// address: 0x4dc9c
// body: available
// range: 0x4dc9c-0x4de8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0004dc9c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  int iStack_58;
  uint uStack_54;
  undefined4 local_40;
  int local_3c [2];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  int aiStack_28 [3];
  
  FUN_0009cdb8(auStack_78);
  piVar1 = DAT_0004de8c;
  iVar2 = FUN_00189fb4(0,*DAT_0004de8c,&local_40);
  if ((iVar2 == 0) && (iVar2 = FUN_00189f64(0,local_40,local_3c,auStack_34), iVar2 == 0)) {
    uVar6 = *piVar1 - local_3c[0];
    iVar2 = FUN_0004d0f8(param_1,auStack_78,local_3c[0],uVar6);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00189fb4(0,*DAT_0004de90,&local_40);
    if ((iVar2 == 0) && (iVar2 = FUN_00189f64(0,local_40,aiStack_28,auStack_30), iVar2 == 0)) {
      iVar2 = FUN_0004d0f8(param_1,auStack_78,aiStack_28[0],uVar6);
      if (iVar2 == 0) {
        return 0;
      }
      if (uStack_54 <= (aiStack_28[0] - local_3c[0]) - uVar6) {
        uVar7 = uStack_54 + uVar6;
        iVar2 = FUN_00189e68(0,local_3c[0],uVar7);
        if (((iVar2 == 0) && (iVar2 = FUN_0018a130(0,local_3c[0],uVar7), iVar2 == 0)) &&
           (iVar2 = FUN_00189e90(0,local_3c[0],uVar7), iVar2 == 0)) {
          uVar5 = uVar6;
          do {
            iVar2 = 0x800;
            if (uVar7 < uVar5 + 0x800) {
              iVar2 = uVar7 - uVar5;
            }
            iVar3 = FUN_0018a0b4(0,aiStack_28[0] + uVar5,param_1 + 0x1061,iVar2);
            if (iVar3 != 0) {
              return 0;
            }
            iVar3 = FUN_0018a1a4(0,local_3c[0] + uVar5,param_1 + 0x1061,iVar2);
            if (iVar3 != 0) {
              return 0;
            }
            uVar5 = uVar5 + iVar2;
          } while (uVar5 < uVar7);
          iStack_58 = local_3c[0] + uVar6;
          iVar2 = FUN_0018a1a4(0,local_3c[0],auStack_78,0x38);
          if (iVar2 == 0) {
            uVar4 = FUN_0004d0f8(param_1,auStack_78,local_3c[0],uVar6);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}

