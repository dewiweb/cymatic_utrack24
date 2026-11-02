// rea decompile_all
// name: FUN_00078f1c
// address: 0x78f1c
// body: available
// range: 0x78f1c-0x79303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00078f1c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_244 [8];
  int local_23c [3];
  undefined4 auStack_230 [26];
  undefined2 local_1c8;
  ushort uStack_1c6;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 auStack_1b8 [8];
  int local_1b0 [3];
  undefined4 auStack_1a4 [27];
  undefined1 auStack_138 [256];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c [2];
  
  iVar1 = FUN_00191ed0(2,1,6);
  if (iVar1 == -1) {
    FUN_00056dc8(param_1);
    return;
  }
  local_1c0 = 0;
  local_1bc = 0;
  _local_1c8 = CONCAT22(*(ushort *)(param_4 + 0x10) >> 8 | *(ushort *)(param_4 + 0x10) << 8,0x210);
  local_1c4 = *(undefined4 *)(param_3 + 4);
  iVar2 = FUN_00190b64(iVar1,&local_1c8,0x10);
  if (iVar2 != -1) {
    FUN_0006dd44(&local_30,*(undefined4 *)(param_4 + 8),0xffffffff);
    FUN_001dacc0(auStack_244,0xc);
    uVar3 = FUN_000034d0(s_DESCRIBE_rtsp____00079304);
    piVar4 = (int *)FUN_001c00a4(local_23c,s_DESCRIBE_rtsp____00079304,uVar3,
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    piVar4 = (int *)FUN_001c00a4(local_23c,*(int *)(param_4 + 0xc),
                                 *(undefined4 *)(*(int *)(param_4 + 0xc) + -4),
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    uVar3 = FUN_000034d0(s__by_name__00079318);
    piVar4 = (int *)FUN_001c00a4(local_23c,s__by_name__00079318,uVar3,
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    piVar4 = (int *)FUN_001c00a4(local_23c,local_30,*(undefined4 *)(local_30 + -4),
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    uVar3 = FUN_000034d0(s_RTSP_1_0_CSeq__2_00079324);
    piVar4 = (int *)FUN_001c00a4(local_23c,s_RTSP_1_0_CSeq__2_00079324,uVar3,
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    uVar3 = FUN_000034d0(&DAT_00079338);
    piVar4 = (int *)FUN_001c00a4(local_23c,&DAT_00079338,uVar3,
                                 *(undefined4 *)((int)auStack_230 + *(int *)(local_23c[0] + -0xc)));
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    piVar4[3] = 0;
    FUN_001d8f88(local_2c,auStack_244);
    FUN_00191fda(iVar1,local_2c[0],*(undefined4 *)(local_2c[0] + -4));
    iVar2 = 0;
    FUN_001dacc0(auStack_1b8,0xc);
    do {
      while( true ) {
        iVar5 = FUN_00191180(iVar1,auStack_138,0xff,8,0,0);
        if (iVar5 < 1) break;
        auStack_138[iVar5] = 0;
        iVar2 = 0;
        uVar3 = FUN_000034d0(auStack_138);
        piVar4 = (int *)FUN_001c00a4(local_1b0,auStack_138,uVar3,
                                     *(undefined4 *)
                                      ((int)auStack_1a4 + *(int *)(local_1b0[0] + -0xc)));
        if (piVar4 != (int *)0x0) {
          piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
        }
        piVar4[3] = 0;
      }
      FUN_0017b9f8(0x14);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    FUN_00190b04(iVar1);
    FUN_001d8f88(&local_34,auStack_1b8);
    iVar1 = FUN_00003374(local_34,&DAT_00079338);
    if (iVar1 != 0) {
      if (iVar1 - local_34 != -1) {
        uVar6 = (iVar1 - local_34) + 4;
        uVar7 = *(uint *)(local_34 + -4);
        if (uVar6 < *(uint *)(local_34 + -4)) {
          uVar7 = uVar6;
        }
        local_38[0] = 0;
        FUN_001da110(&local_34,0,uVar7,local_38,0,0,0);
      }
    }
    FUN_00056158(param_1,&local_34);
    FUN_001da44c(&local_34);
    FUN_00161210(auStack_1b8,0);
    FUN_001da44c(local_2c);
    FUN_00161210(auStack_244,0);
    FUN_001da44c(&local_30);
    return;
  }
  FUN_00190b04(iVar1);
  FUN_00056dc8(param_1);
  return;
}

