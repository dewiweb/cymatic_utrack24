// rea decompile_all
// name: FUN_00510240
// address: 0x510240
// body: available
// range: 0x510240-0x510478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510240(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined3 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_XMM3_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708b63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = DSPMChannelStrip::Listener::vftable;
  *in_ECX = DSPMViewport::vftable;
  in_ECX[0x1c] = DSPMViewport::vftable;
  in_ECX[0x1d] = param_2;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_8._1_3_ = 0;
  uVar2 = local_8._1_3_;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = param_1;
  if (0 < param_1) {
    do {
      operator_new(2000);
      local_8._0_1_ = 3;
      piVar3 = (int *)FUN_0050ba60(in_ECX[0x20],in_ECX + 0x1c,extraout_ECX,in_XMM3_Da);
      local_8._0_1_ = 2;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x28))(1);
        iVar8 = -1;
        if ((undefined4 *)piVar3[3] != in_ECX) {
          if ((undefined4 *)piVar3[3] == (undefined4 *)0x0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(piVar3);
          }
          piVar3[3] = (int)in_ECX;
          if ((*(byte *)(piVar3 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar3 + 0x69) & 1) == 0) && (iVar8 = in_ECX[0xc], 0 < iVar8)) {
            piVar6 = (int *)(in_ECX[10] + (iVar8 + -1) * 4);
            do {
              if ((*(byte *)(*piVar6 + 0x69) & 1) == 0) break;
              iVar8 = iVar8 + -1;
              piVar6 = piVar6 + -1;
            } while (0 < iVar8);
          }
          FUN_00410380(iVar8,piVar3);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      FUN_0050b1c0(0);
      iVar8 = in_ECX[0x20];
      iVar7 = iVar8 + 1;
      if ((int)in_ECX[0x1f] < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar8 + 2;
        }
        uVar9 = iVar8 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (in_ECX[0x1f] != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)in_ECX[0x1e]);
            in_ECX[0x1e] = 0;
          }
          else if (in_ECX[0x1e] == 0) {
            uVar4 = FUN_004c554b();
            in_ECX[0x1e] = uVar4;
          }
          else {
            uVar4 = FUN_004c553b(in_ECX[0x1e],uVar9 * 4);
            in_ECX[0x1e] = uVar4;
          }
          in_ECX[0x1f] = uVar9;
        }
      }
      iVar8 = in_ECX[0x20];
      param_1 = param_1 + -1;
      in_ECX[0x20] = iVar8 + 1;
      *(int **)(in_ECX[0x1e] + iVar8 * 4) = piVar3;
      uVar2 = local_8._1_3_;
    } while (param_1 != 0);
  }
  local_8._1_3_ = uVar2;
  if (in_ECX[0x10] == 0) {
    puVar5 = operator_new(0x1c);
    *puVar5 = juce::StandardCachedComponentImage::vftable;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = in_ECX;
    puVar5[6] = 0x3f800000;
    puVar1 = (undefined4 *)in_ECX[0x10];
    if ((puVar1 != puVar5) && (in_ECX[0x10] = puVar5, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

