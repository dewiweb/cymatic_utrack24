// rea decompile_all
// name: FUN_0061f5a0
// address: 0x61f5a0
// body: available
// range: 0x61f5a0-0x61f673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0061f5a0(void)

{
  DWORD DVar1;
  uint uVar2;
  uint *in_ECX;
  DWORD *pDVar3;
  int iVar4;
  uint uVar5;
  
  DVar1 = GetCurrentThreadId();
  FUN_00637f30();
  iVar4 = 0;
  if (0 < (int)in_ECX[7]) {
    pDVar3 = (DWORD *)in_ECX[5];
    do {
      if (*pDVar3 == DVar1) {
        pDVar3[1] = pDVar3[1] + 1;
        goto LAB_0061f66a;
      }
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 2;
    } while (iVar4 < (int)in_ECX[7]);
  }
  if ((in_ECX[2] + in_ECX[3] != 0) && ((DVar1 != in_ECX[4] || ((int)in_ECX[3] < 1)))) {
    LOCK();
    uVar5 = *in_ECX;
    *in_ECX = 0;
    UNLOCK();
    return uVar5 & 0xffffff00;
  }
  iVar4 = in_ECX[7] + 1;
  if (((int)in_ECX[6] < iVar4) &&
     (uVar5 = in_ECX[7] + 9 + iVar4 / 2 & 0xfffffff8, in_ECX[6] != uVar5)) {
    if ((int)uVar5 < 1) {
      FID_conflict__free((void *)in_ECX[5]);
      in_ECX[5] = 0;
    }
    else if (in_ECX[5] == 0) {
      uVar2 = FUN_004c554b();
      in_ECX[5] = uVar2;
    }
    else {
      uVar2 = FUN_004c553b(in_ECX[5],uVar5 * 8);
      in_ECX[5] = uVar2;
    }
    in_ECX[6] = uVar5;
  }
  uVar5 = in_ECX[7];
  in_ECX[7] = uVar5 + 1;
  pDVar3 = (DWORD *)(in_ECX[5] + uVar5 * 8);
  if (pDVar3 != (DWORD *)0x0) {
    *pDVar3 = DVar1;
    pDVar3[1] = 1;
  }
LAB_0061f66a:
  LOCK();
  uVar5 = *in_ECX;
  *in_ECX = 0;
  UNLOCK();
  return CONCAT31((int3)(uVar5 >> 8),1);
}

