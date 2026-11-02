// rea decompile_all
// name: FUN_005f2cf0
// address: 0x5f2cf0
// body: available
// range: 0x5f2cf0-0x5f2f15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f2cf0(void)

{
  undefined4 *_Memory;
  undefined4 *in_ECX;
  int iVar1;
  uint uVar2;
  
  if (in_ECX != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX[1] + 0x2e40) = 1;
    FUN_005f1da0();
    if (*(int *)(in_ECX[1] + 0x2de0) != 0) {
      FUN_005f7140();
    }
    uVar2 = 0;
    do {
      iVar1 = in_ECX[1] + uVar2;
      if (*(void **)(iVar1 + 0x1870) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1870));
      }
      if (*(void **)(iVar1 + 0x1874) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1874));
      }
      *(undefined4 *)(iVar1 + 0x1870) = 0;
      *(undefined4 *)(iVar1 + 0x1874) = 0;
      *(undefined4 *)(iVar1 + 0x1878) = 0;
      iVar1 = in_ECX[1] + uVar2;
      if (*(void **)(iVar1 + 0x187c) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x187c));
      }
      if (*(void **)(iVar1 + 0x1880) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1880));
      }
      uVar2 = uVar2 + 0x18;
      *(undefined4 *)(iVar1 + 0x187c) = 0;
      *(undefined4 *)(iVar1 + 0x1880) = 0;
      *(undefined4 *)(iVar1 + 0x1884) = 0;
    } while (uVar2 < 0xc0);
    uVar2 = 0;
    do {
      iVar1 = in_ECX[1] + uVar2;
      if (*(void **)(iVar1 + 0x1930) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1930));
      }
      if (*(void **)(iVar1 + 0x1934) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1934));
      }
      *(undefined4 *)(iVar1 + 0x1930) = 0;
      *(undefined4 *)(iVar1 + 0x1934) = 0;
      *(undefined4 *)(iVar1 + 0x1938) = 0;
      iVar1 = in_ECX[1] + uVar2;
      if (*(void **)(iVar1 + 0x193c) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x193c));
      }
      if (*(void **)(iVar1 + 0x1940) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x1940));
      }
      uVar2 = uVar2 + 0x18;
      *(undefined4 *)(iVar1 + 0x193c) = 0;
      *(undefined4 *)(iVar1 + 0x1940) = 0;
      *(undefined4 *)(iVar1 + 0x1944) = 0;
    } while (uVar2 < 0x30);
    uVar2 = 0;
    do {
      iVar1 = in_ECX[1] + uVar2;
      if (*(void **)(iVar1 + 0x2dc4) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x2dc4));
      }
      if (*(void **)(iVar1 + 0x2dc8) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x2dc8));
      }
      uVar2 = uVar2 + 0xc;
      *(undefined4 *)(iVar1 + 0x2dc4) = 0;
      *(undefined4 *)(iVar1 + 0x2dc8) = 0;
      *(undefined4 *)(iVar1 + 0x2dcc) = 0;
    } while (uVar2 < 0x18);
    _Memory = *(undefined4 **)(in_ECX[1] + 0x1ac8);
    if ((void *)*_Memory != (void *)0x0) {
      FID_conflict__free((void *)*_Memory);
    }
    *_Memory = 0;
    _Memory[2] = 0;
    _Memory[4] = 0;
    _Memory[3] = 0;
    FID_conflict__free(_Memory);
    FID_conflict__free((void *)in_ECX[1]);
    FID_conflict__free((void *)*in_ECX);
    FID_conflict__free(in_ECX);
  }
  return;
}

