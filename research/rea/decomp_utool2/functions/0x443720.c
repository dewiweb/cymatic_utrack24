// rea decompile_all
// name: FUN_00443720
// address: 0x443720
// body: available
// range: 0x443720-0x443876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443720(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *in_ECX = juce::GraphRenderingOps::ProcessBufferOp::vftable;
  iVar4 = *param_1;
  in_ECX[1] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[2] = *(undefined4 *)(*param_1 + 0x18);
  FUN_0040ec60(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = in_ECX + 0xd;
  iVar4 = 1;
  if (1 < param_3) {
    iVar4 = param_3;
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  in_ECX[0x2e] = iVar4;
  in_ECX[0x2f] = param_4;
  FID_conflict__free((void *)in_ECX[6]);
  uVar2 = FUN_004c5556(iVar4,4);
  in_ECX[6] = uVar2;
  uVar2 = in_ECX[0x2e];
  FID_conflict__free((void *)in_ECX[7]);
  uVar2 = FUN_004c5556(uVar2,4);
  in_ECX[7] = uVar2;
  if ((int)in_ECX[5] < (int)in_ECX[0x2e]) {
    do {
      iVar4 = in_ECX[5];
      iVar3 = iVar4 + 1;
      if ((int)in_ECX[4] < iVar3) {
        if (iVar3 < 0) {
          iVar3 = iVar4 + 2;
        }
        uVar5 = iVar4 + 9 + (iVar3 >> 1) & 0xfffffff8;
        if (in_ECX[4] != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)in_ECX[3]);
            in_ECX[3] = 0;
          }
          else if (in_ECX[3] == 0) {
            uVar2 = FUN_004c554b();
            in_ECX[3] = uVar2;
          }
          else {
            uVar2 = FUN_004c553b(in_ECX[3],uVar5 * 4);
            in_ECX[3] = uVar2;
          }
          in_ECX[4] = uVar5;
        }
      }
      iVar4 = in_ECX[5];
      in_ECX[5] = iVar4 + 1;
      puVar1 = (undefined4 *)(in_ECX[3] + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
    } while ((int)in_ECX[5] < (int)in_ECX[0x2e]);
  }
  return;
}

