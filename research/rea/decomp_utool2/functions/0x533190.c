// rea decompile_all
// name: FUN_00533190
// address: 0x533190
// body: available
// range: 0x533190-0x53339b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533190(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  void *extraout_EDX;
  void *pvVar7;
  
  iVar1 = FUN_005bd4e0();
  iVar1 = iVar1 * in_ECX[0x12a];
  in_ECX[0x130] = iVar1;
  if (in_ECX[0x131] < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX[0x131] + 1;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = in_ECX[0x12f];
  iVar6 = iVar2 - iVar1;
  if (iVar1 < iVar2) {
    do {
      iVar2 = 0;
      uVar5 = in_ECX[0x12f] - 1;
      if (uVar5 < (uint)in_ECX[0x12f]) {
        iVar2 = *(int *)(in_ECX[0x12d] + uVar5 * 4);
        iVar6 = in_ECX[0x12d] + uVar5 * 4;
        iVar3 = in_ECX[0x12f];
        in_ECX[0x12f] = iVar3 + -1;
        iVar3 = (iVar3 + -1) - uVar5;
        if (0 < iVar3) {
          FUN_004c1df0(iVar6,iVar6 + 4,iVar3 * 4);
        }
        iVar6 = in_ECX[0x12f];
        if ((iVar6 * 2 < in_ECX[0x12e]) && (iVar6 < in_ECX[0x12e])) {
          FUN_00409cf0(iVar6);
        }
      }
      FUN_0053e510();
      if (iVar2 != 0) {
        FUN_0053e890();
        FUN_004bfe14(iVar2,0x40);
      }
    } while (iVar1 < in_ECX[0x12f]);
    iVar2 = in_ECX[0x12f];
    iVar6 = iVar2 - iVar1;
  }
  if (SBORROW4(iVar2,iVar1) != iVar6 < 0) {
    do {
      pvVar4 = operator_new(0x40);
      FUN_0053e920(extraout_ECX,in_ECX[0x128]);
      *(undefined2 *)((int)extraout_EDX + 0x38) = 0;
      *(int *)((int)extraout_EDX + 8) = in_ECX[0x12f];
      iVar2 = in_ECX[0x12f];
      iVar6 = iVar2 + 1;
      pvVar7 = extraout_EDX;
      if (in_ECX[0x12e] < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar2 + 2;
        }
        uVar5 = iVar2 + 9 + (iVar6 >> 1) & 0xfffffff8;
        pvVar7 = extraout_EDX;
        if (in_ECX[0x12e] != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)in_ECX[0x12d]);
            in_ECX[0x12d] = 0;
          }
          else if (in_ECX[0x12d] == 0) {
            iVar2 = FUN_004c554b();
            in_ECX[0x12d] = iVar2;
          }
          else {
            iVar2 = FUN_004c553b(in_ECX[0x12d],uVar5 * 4);
            in_ECX[0x12d] = iVar2;
          }
          in_ECX[0x12e] = uVar5;
          pvVar7 = pvVar4;
        }
      }
      iVar2 = in_ECX[0x12f];
      in_ECX[0x12f] = iVar2 + 1;
      *(void **)(in_ECX[0x12d] + iVar2 * 4) = pvVar7;
    } while (in_ECX[0x12f] < iVar1);
  }
  FUN_00531cb0();
  (**(code **)(*in_ECX + 0xb8))();
  return;
}

