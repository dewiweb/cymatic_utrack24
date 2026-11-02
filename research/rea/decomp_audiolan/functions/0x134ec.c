// rea decompile_all
// name: FUN_000134ec
// address: 0x134ec
// body: available
// range: 0x134ec-0x137bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000134ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *extraout_r12;
  code *pcVar11;
  bool bVar12;
  undefined4 uStack_60;
  undefined2 auStack_5c [2];
  int iStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int *apiStack_38 [5];
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iStack_58 = param_1 + 0xdc;
  do {
    iVar2 = FUN_00051ec0(param_1,apiStack_38);
    if (iVar2 == 0) {
      auStack_5c[0] = *(undefined2 *)(*apiStack_38[0] + 8);
      iVar2 = *(int *)(*apiStack_38[0] + 4);
      bVar12 = (*(uint *)(param_1 + 0xf8) & 1) == 0;
      pcVar11 = extraout_r12;
      if (bVar12) {
        pcVar11 = *(code **)(param_1 + 0xf4);
      }
      piVar3 = (int *)(param_1 + ((int)*(uint *)(param_1 + 0xf8) >> 1));
      if (!bVar12) {
        pcVar11 = *(code **)(*piVar3 + *(int *)(param_1 + 0xf4));
      }
      uVar4 = (*pcVar11)(piVar3,iVar2,auStack_5c,&uStack_60);
      if (uVar4 != 0) {
        if (*(char *)(param_1 + 0xc0) == '\0') {
          iVar5 = FUN_000123d8(*(undefined4 *)(param_1 + 0xd8),iStack_58,uStack_60);
        }
        else {
          iVar5 = FUN_00012468();
        }
        uVar1 = uStack_60;
        if (iVar5 == 0) {
          if (*(char *)(param_1 + 0xfc) != '\x03') {
            *(undefined4 *)(param_1 + 0x100) = DAT_00013000;
            iVar2 = FUN_000a7b84();
            if (iVar2 != 0) {
              uStack_48 = CONCAT13(3,CONCAT12(*(undefined1 *)(param_1 + 0xbe),3));
              uStack_44 = uVar1;
              uStack_40 = 0;
              iStack_3c = 0;
              iVar2 = FUN_00154df8(iVar2,&uStack_48);
              if (iVar2 != 0) {
                *(undefined1 *)(param_1 + 0xfc) = 3;
                *(undefined4 *)(param_1 + 0xe4) = 0xfffffff;
              }
            }
          }
        }
        else {
          iVar6 = FUN_00006158(auStack_5c[0],(uint)*(ushort *)(param_1 + 0xc2) << 2);
          if (iVar6 != 0) {
            iVar2 = iVar2 + (uVar4 & 0xfffffffc);
            if (*(char *)(param_1 + 0xbf) == '\0') {
              iStack_3c = param_1 + 0xdc;
              iVar10 = iVar6;
              while( true ) {
                iVar8 = 0;
                while( true ) {
                  iVar7 = (int)*(char *)(*(int *)(param_1 + 0x118) + iVar8);
                  iVar9 = iVar8 + 1;
                  if (iVar7 < 0) break;
                  uVar4 = *(uint *)(iVar2 + iVar7 * 4);
                  iVar8 = iVar8 + 2;
                  *(uint *)(iVar5 + *(char *)(*(int *)(param_1 + 0x118) + iVar9) * 4) =
                       uVar4 >> 0x18 | uVar4 << 0x18 | (uVar4 & 0xff0000) >> 8 |
                       (uVar4 & 0xff00) << 8;
                }
                iVar10 = iVar10 + -1;
                if (iVar10 == 0) break;
                iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0xc2) * 4;
                iVar5 = FUN_00012514(*(undefined4 *)(param_1 + 0xd8),iStack_3c);
              }
            }
            else {
              iVar10 = iVar6;
              while( true ) {
                iVar8 = 0;
                while( true ) {
                  iVar9 = (int)*(char *)(*(int *)(param_1 + 0x118) + iVar8);
                  iVar7 = iVar8 + 1;
                  if (iVar9 < 0) break;
                  iVar8 = iVar8 + 2;
                  *(undefined4 *)(iVar5 + *(char *)(*(int *)(param_1 + 0x118) + iVar7) * 4) =
                       *(undefined4 *)(iVar2 + iVar9 * 4);
                }
                iVar10 = iVar10 + -1;
                if (iVar10 == 0) break;
                iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0xc2) * 4;
                iVar5 = FUN_00012514(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xdc);
              }
            }
            FUN_000128d4(param_1,iVar6,uStack_60);
          }
        }
      }
      FUN_0019d1bc(apiStack_38[0]);
    }
    else {
      if (iVar2 != -4) {
        return;
      }
      if (*(char *)(param_1 + 0xfc) != '\x02') {
        *(undefined4 *)(param_1 + 0x100) = 1000;
        iVar2 = FUN_000a7b84();
        if (iVar2 != 0) {
          uStack_4e = *(undefined1 *)(param_1 + 0xbe);
          uStack_50 = 3;
          uStack_4f = 0;
          uStack_4d = 2;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          iVar2 = FUN_00154df8(iVar2,&uStack_50,0);
          if (iVar2 != 0) {
            *(undefined1 *)(param_1 + 0xfc) = 2;
            *(undefined4 *)(param_1 + 0xe4) = 0xfffffff;
          }
        }
      }
    }
  } while (*(char *)(param_1 + 0xf0) != '\0');
  return;
}

