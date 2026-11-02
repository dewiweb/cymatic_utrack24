// rea decompile_all
// name: FUN_0009f89c
// address: 0x9f89c
// body: available
// range: 0x9f89c-0x9f8c3 inclusive
// range: 0x9f8e0-0x9f96f inclusive
// range: 0xbe9ec-0xbeba7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0009f92c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0009f89c(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_68;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  int local_58;
  undefined4 *puStack_4c;
  int iStack_48;
  int local_3c;
  undefined4 local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  if (param_3 != 5) {
    switch(param_3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  piVar7 = (int *)**(int **)(param_1 + 0x168);
  do {
    if (piVar7 == *(int **)(param_1 + 0x168)) {
      piVar2 = *(int **)(param_1 + 0x180);
      piVar7 = (int *)*piVar2;
      if (piVar7 == piVar2) {
        return;
      }
      while (*(byte *)((int)piVar7 + 0xe) != param_2) {
        piVar7 = (int *)*piVar7;
        if (piVar7 == piVar2) {
          return;
        }
      }
      piVar2 = *(int **)(param_1 + 0x134);
      piVar7 = piVar7 + 0x15;
LAB_000be9ec:
      uVar9 = *(undefined4 *)(DAT_000beba8 + 0x68);
      uVar8 = *(undefined4 *)(DAT_000beba8 + 0x6c);
      uVar3 = FUN_001dbffc(&puStack_4c,piVar7);
      puVar4 = (undefined4 *)FUN_001a0808(0x30,1);
      if (puVar4 == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        FUN_001dbffc(&local_68,uVar3);
        uVar3 = DAT_000bebac;
        puVar4[3] = uVar8;
        *puVar4 = uVar3;
        puVar4[1] = piVar2;
        puVar4[2] = uVar9;
        iVar5 = FUN_001dbffc(puVar4 + 4,&local_68);
        iVar6 = iVar5 + -0x10;
        *(int *)(iVar5 + 0x1c) = param_4 - iVar1;
      }
      (**(code **)(*piVar2 + 0x2c))(piVar2,iVar6,0xffffffff);
      if ((puVar4 != (undefined4 *)0x0) && (local_58 != 0)) {
        local_2c = local_58;
        local_30 = *(undefined4 *)(local_58 + 8);
        FUN_001d0bd8(auStack_28,&local_68,&local_30,&local_2c);
        *(undefined4 *)(local_58 + 0xc) = local_64;
        piVar7 = (int *)local_68;
        while (piVar7 != (int *)0x0) {
          local_68 = *piVar7;
          FUN_0010fa20(piVar7[2],piVar7[1],0);
          FUN_0010fa20(piVar7,1,0);
          piVar7 = (int *)local_68;
        }
      }
      if (local_3c == 0) {
        return;
      }
      local_68 = *(int *)(local_3c + 8);
      FUN_001d0bd8(auStack_60,&puStack_4c,&local_68,&local_64);
      *(int *)(local_3c + 0xc) = iStack_48;
      iStack_48 = local_3c;
      puVar4 = puStack_4c;
      if (puStack_4c == (undefined4 *)0x0) {
        return;
      }
      do {
        puStack_4c = (undefined4 *)*puVar4;
        FUN_0010fa20(puVar4[2],puVar4[1],0);
        FUN_0010fa20(puVar4,1,0);
        puVar4 = puStack_4c;
      } while (puStack_4c != (undefined4 *)0x0);
      return;
    }
    if (piVar7[4] == param_2) {
      piVar7 = piVar7 + 0x12;
      piVar2 = *(int **)(param_1 + 0x134);
      goto LAB_000be9ec;
    }
    piVar7 = (int *)*piVar7;
  } while( true );
}

