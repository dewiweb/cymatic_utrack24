// rea decompile_all
// name: FUN_005f2f20
// address: 0x5f2f20
// body: available
// range: 0x5f2f20-0x5f3511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005f2f20(void)

{
  void *_Memory;
  int *_Memory_00;
  int iVar1;
  undefined4 uVar2;
  
  _Memory_00 = (int *)FUN_004c5556(1,8);
  if (_Memory_00 != (int *)0x0) {
    iVar1 = FUN_004c5556(1,0x278);
    *_Memory_00 = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_004c5556(1,0x2e48);
      _Memory_00[1] = iVar1;
      if (iVar1 == 0) {
        FID_conflict__free((void *)*_Memory_00);
        FID_conflict__free(_Memory_00);
        return (int *)0x0;
      }
      uVar2 = FUN_004c5556(1,0x14);
      *(undefined4 *)(_Memory_00[1] + 0x1ac8) = uVar2;
      _Memory = (void *)_Memory_00[1];
      if (*(int *)((int)_Memory + 0x1ac8) == 0) {
        FID_conflict__free(_Memory);
        FID_conflict__free((void *)*_Memory_00);
        FID_conflict__free(_Memory_00);
        return (int *)0x0;
      }
      *(undefined4 *)((int)_Memory + 0x1c7c) = 0;
      FUN_005f10a0();
      *(undefined4 *)(_Memory_00[1] + 0x2e40) = 0;
      *(int *)(_Memory_00[1] + 0x1820) = _Memory_00[1] + 0x150;
      *(int *)(_Memory_00[1] + 0x1824) = _Memory_00[1] + 0x274;
      *(int *)(_Memory_00[1] + 0x1828) = _Memory_00[1] + 0x398;
      *(int *)(_Memory_00[1] + 0x182c) = _Memory_00[1] + 0x4bc;
      *(int *)(_Memory_00[1] + 0x1830) = _Memory_00[1] + 0x5e0;
      *(int *)(_Memory_00[1] + 0x1834) = _Memory_00[1] + 0x704;
      *(int *)(_Memory_00[1] + 0x1838) = _Memory_00[1] + 0x828;
      *(int *)(_Memory_00[1] + 0x183c) = _Memory_00[1] + 0x94c;
      *(int *)(_Memory_00[1] + 0x1840) = _Memory_00[1] + 0xa70;
      *(int *)(_Memory_00[1] + 0x1844) = _Memory_00[1] + 0xb94;
      *(int *)(_Memory_00[1] + 0x1848) = _Memory_00[1] + 0xcb8;
      *(int *)(_Memory_00[1] + 0x184c) = _Memory_00[1] + 0xddc;
      *(int *)(_Memory_00[1] + 0x1850) = _Memory_00[1] + 0xf00;
      *(int *)(_Memory_00[1] + 0x1854) = _Memory_00[1] + 0x1024;
      *(int *)(_Memory_00[1] + 0x1858) = _Memory_00[1] + 0x1148;
      *(int *)(_Memory_00[1] + 0x185c) = _Memory_00[1] + 0x126c;
      *(int *)(_Memory_00[1] + 0x1860) = _Memory_00[1] + 0x1390;
      *(int *)(_Memory_00[1] + 0x1864) = _Memory_00[1] + 0x14b4;
      *(int *)(_Memory_00[1] + 0x1868) = _Memory_00[1] + 0x15d8;
      *(int *)(_Memory_00[1] + 0x186c) = _Memory_00[1] + 0x16fc;
      *(int *)(_Memory_00[1] + 0x19f0) = _Memory_00[1] + 0x1870;
      *(int *)(_Memory_00[1] + 0x19f4) = _Memory_00[1] + 0x187c;
      *(int *)(_Memory_00[1] + 0x19f8) = _Memory_00[1] + 0x1888;
      *(int *)(_Memory_00[1] + 0x19fc) = _Memory_00[1] + 0x1894;
      *(int *)(_Memory_00[1] + 0x1a00) = _Memory_00[1] + 0x18a0;
      *(int *)(_Memory_00[1] + 0x1a04) = _Memory_00[1] + 0x18ac;
      *(int *)(_Memory_00[1] + 0x1a08) = _Memory_00[1] + 0x18b8;
      *(int *)(_Memory_00[1] + 0x1a0c) = _Memory_00[1] + 0x18c4;
      *(int *)(_Memory_00[1] + 0x1a10) = _Memory_00[1] + 0x18d0;
      *(int *)(_Memory_00[1] + 0x1a14) = _Memory_00[1] + 0x18dc;
      *(int *)(_Memory_00[1] + 0x1a18) = _Memory_00[1] + 0x18e8;
      *(int *)(_Memory_00[1] + 0x1a1c) = _Memory_00[1] + 0x18f4;
      *(int *)(_Memory_00[1] + 0x1a20) = _Memory_00[1] + 0x1900;
      *(int *)(_Memory_00[1] + 0x1a24) = _Memory_00[1] + 0x190c;
      *(int *)(_Memory_00[1] + 0x1a28) = _Memory_00[1] + 0x1918;
      *(int *)(_Memory_00[1] + 0x1a2c) = _Memory_00[1] + 0x1924;
      *(int *)(_Memory_00[1] + 0x1a30) = _Memory_00[1] + 0x1930;
      *(int *)(_Memory_00[1] + 0x1a34) = _Memory_00[1] + 0x193c;
      *(int *)(_Memory_00[1] + 0x1a38) = _Memory_00[1] + 0x1948;
      *(int *)(_Memory_00[1] + 0x1a3c) = _Memory_00[1] + 0x1954;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1870) = 0;
      *(undefined4 *)(iVar1 + 0x1874) = 0;
      *(undefined4 *)(iVar1 + 0x1878) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x187c) = 0;
      *(undefined4 *)(iVar1 + 0x1880) = 0;
      *(undefined4 *)(iVar1 + 0x1884) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1888) = 0;
      *(undefined4 *)(iVar1 + 0x188c) = 0;
      *(undefined4 *)(iVar1 + 0x1890) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1894) = 0;
      *(undefined4 *)(iVar1 + 0x1898) = 0;
      *(undefined4 *)(iVar1 + 0x189c) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18a0) = 0;
      *(undefined4 *)(iVar1 + 0x18a4) = 0;
      *(undefined4 *)(iVar1 + 0x18a8) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18ac) = 0;
      *(undefined4 *)(iVar1 + 0x18b0) = 0;
      *(undefined4 *)(iVar1 + 0x18b4) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18b8) = 0;
      *(undefined4 *)(iVar1 + 0x18bc) = 0;
      *(undefined4 *)(iVar1 + 0x18c0) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18c4) = 0;
      *(undefined4 *)(iVar1 + 0x18c8) = 0;
      *(undefined4 *)(iVar1 + 0x18cc) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18d0) = 0;
      *(undefined4 *)(iVar1 + 0x18d4) = 0;
      *(undefined4 *)(iVar1 + 0x18d8) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18dc) = 0;
      *(undefined4 *)(iVar1 + 0x18e0) = 0;
      *(undefined4 *)(iVar1 + 0x18e4) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18e8) = 0;
      *(undefined4 *)(iVar1 + 0x18ec) = 0;
      *(undefined4 *)(iVar1 + 0x18f0) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x18f4) = 0;
      *(undefined4 *)(iVar1 + 0x18f8) = 0;
      *(undefined4 *)(iVar1 + 0x18fc) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1900) = 0;
      *(undefined4 *)(iVar1 + 0x1904) = 0;
      *(undefined4 *)(iVar1 + 0x1908) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x190c) = 0;
      *(undefined4 *)(iVar1 + 0x1910) = 0;
      *(undefined4 *)(iVar1 + 0x1914) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1918) = 0;
      *(undefined4 *)(iVar1 + 0x191c) = 0;
      *(undefined4 *)(iVar1 + 0x1920) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1924) = 0;
      *(undefined4 *)(iVar1 + 0x1928) = 0;
      *(undefined4 *)(iVar1 + 0x192c) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1930) = 0;
      *(undefined4 *)(iVar1 + 0x1934) = 0;
      *(undefined4 *)(iVar1 + 0x1938) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x193c) = 0;
      *(undefined4 *)(iVar1 + 0x1940) = 0;
      *(undefined4 *)(iVar1 + 0x1944) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1948) = 0;
      *(undefined4 *)(iVar1 + 0x194c) = 0;
      *(undefined4 *)(iVar1 + 0x1950) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x1954) = 0;
      *(undefined4 *)(iVar1 + 0x1958) = 0;
      *(undefined4 *)(iVar1 + 0x195c) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x2dc4) = 0;
      *(undefined4 *)(iVar1 + 0x2dc8) = 0;
      *(undefined4 *)(iVar1 + 0x2dcc) = 0;
      iVar1 = _Memory_00[1];
      *(undefined4 *)(iVar1 + 0x2dd0) = 0;
      *(undefined4 *)(iVar1 + 0x2dd4) = 0;
      *(undefined4 *)(iVar1 + 0x2dd8) = 0;
      *(undefined4 *)*_Memory_00 = 1;
      return _Memory_00;
    }
    FID_conflict__free(_Memory_00);
  }
  return (int *)0x0;
}

